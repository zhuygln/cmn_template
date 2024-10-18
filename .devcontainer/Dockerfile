# Use the official Ubuntu 20.04 as a base image
FROM ubuntu:20.04

# Set environment variable to avoid user interaction during package installation
ENV DEBIAN_FRONTEND=noninteractive
COPY ["common-debian.sh", "/root/"]

# Install zsh, which is more handy than bash
ARG INSTALL_ZSH=true
# Upgrade OS packages to their latest versions
ARG UPGRADE_PACKAGES=true
# Install needed packages and setup non-root user. Use a separate RUN statement to add your own dependencies.
# Leave USERNAME blank here. Please set your SAS username as USERNAME args in the devcontainer.json file.
ARG USERNAME=user1
ARG USER_UID=10000
ARG USER_GID=$USER_UID

RUN apt-get update && \
    apt-get install -y software-properties-common && \
    add-apt-repository -y ppa:deadsnakes/ppa && \
    apt-get install -y python3.10 python3.10-distutils python3.10-venv python3.10-dev # add this to use python3.10 as default

RUN cd /root && \
    apt-get update && \
    chmod +x common-debian.sh && \
    /bin/bash common-debian.sh ${INSTALL_ZSH} ${USERNAME} ${USER_UID} ${USER_GID} ${UPGRADE_PACKAGES}
RUN wget --output-document get-pip.py https://bootstrap.pypa.io/get-pip.py && \
    python3.10 get-pip.py
RUN pip install -q pipx
RUN PIPX_HOME=/opt/pipx PIPX_BIN_DIR=/usr/local/bin PIPX_MAN_DIR=/usr/local/share/man pipx install poetry
RUN rm -rf /var/lib/apt/lists/* /tmp/library-scripts get-pip.py && \
    apt-get clean -y


# ENVIRONMENT. 
# ENV LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$ODBCHOME/lib

# Setting needed locale environment for the proc SQL calls
ENV LC_ALL en_US.UTF-8
ENV TZ="America/New_York"
CMD ["tail", "-f", "/dev/null"]


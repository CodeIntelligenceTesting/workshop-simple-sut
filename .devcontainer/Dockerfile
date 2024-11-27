FROM mcr.microsoft.com/devcontainers/cpp:1-ubuntu-24.04

ARG CIFUZZ_CREDENTIALS

# Install APT packages with caching set up according to
# https://docs.docker.com/engine/reference/builder/#example-cache-apt-packages
RUN rm -f /etc/apt/apt.conf.d/docker-clean && \
    echo 'Binary::apt::APT::Keep-Downloaded-Packages "true";' > /etc/apt/apt.conf.d/keep-cache
RUN apt-get update && \
    apt-get install -y \
        curl \
        build-essential \
        git \
        gdb \
        cmake \
        clang \
        llvm \
        lcov \
        libclang-rt-dev \
        vim \
        bash-completion \
        libgtest-dev

RUN sh -c "$(curl -fsSL http://downloads.code-intelligence.com/assets/install-cifuzz.sh)" $CIFUZZ_CREDENTIALS latest
RUN cifuzz completion bash > /etc/bash_completion.d/cifuzz
# Enable bash completion for all users
RUN echo "if [ -f /etc/bash_completion ]; then . /etc/bash_completion; fi" >> /root/.bashrc

FROM ubuntu:18.04

RUN apt-get update
RUN apt install -y software-properties-common
RUN apt-get install -y build-essential
RUN apt-get install -y ccache cmake make g++-multilib gdb pkg-config coreutils python3-pexpect manpages-dev git ninja-build capnproto libcapnp-dev colordiff locales

RUN git clone https://github.com/timothywangdev/Programming-Contests.git pc
RUN cp ./pc/build.sh /usr/local/bin/build.sh && cp ./pc/diff_testcase.sh /usr/local/bin/diff_testcase.sh
RUN chmod +x /usr/local/bin/build.sh
RUN chmod +x /usr/local/bin/diff_testcase.sh
RUN locale-gen en_US.UTF-8
ENV LC_CTYPE=en_US.UTF-8
ENV LC_ALL=en_US.UTF-8
# Install rr manually
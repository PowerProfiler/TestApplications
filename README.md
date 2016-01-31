# TestApplications

Whenever a change is made to this repository, the applications here will be run against every open pull request in PowerProfiler/RIOT. Similarly, whenever a new pull request is made in PowerProfiler/RIOT, all the apps here will be run on it.

The power measurement jig measures average power very accurately. In order for it to work, however, the application must have periodic behavior. For example, if you want to test how power efficient your radio duty cycling code is, then you must have an application that wakes up and sends a packet every 30 seconds for example, and continues to do so ad infinitum. The applications must not require any stdin to work, as the device under test does not have a UART nor debug probes attached, as those interfere with accurate power consumption results.

The test hardware is an ATSAMR21E18A (similar to the MCU present on the SAMR21XPRO) with an attached LED. There are no other components on the PCB (apart from a 16 MHz crystal for the radio) as we want to examine just the power consumption of the SoC.

If there are any problems with the power profiler, please create an issue on PowerProfiler/RIOT.

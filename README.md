# ModernGadgets
ModernGadgets is the latest system monitoring suite by iamanai. It takes the work done on illustro Gadgets and expands, streamlines, and advances its capabilities. Skins are inspired by the AddGadgets.com system monitoring gadgets.

Additional readme information provided in 'Skins/ModernGadgets/@Resources/Readme.txt'

----------
DEVELOPMENT TO-DO LIST
 - Complete all four gadgets, with the entirety of their functionalities excluding config skins
 - Design and complete gadget config skins, visual config skin, and general config skin
 - Update to HWiNFO plugin 3.2.0, design and complete HWiNFO config tool
 - Update settings management script to handle separated files
 - Refresh settings skin to conform with new design language, finish tutorial
 - Fix bugs
 - Release v1.0.0
 - Add SLI support to GPU Meter
 - Add more gadgets!

----------
KNOWN ISSUES:
 - HWiNFO detection for Core Temperature, Fan, and Clock toggles in CPU Meter's config skin currently doesn't function
 - Occasionally, Network Meter will not display the external IP address (webparser will time out for reasons unknown)
 - Icon switching in GPU meter (NVIDIA and AMD) currently doesn't function
 - Occasionally, Disks Meter will display the disk temperature for a removable drive. This is unintended behavior
 - Refreshing Network Meter while it is touching the right side of the screen will cause it to move left
 - CPU Meter's graph does not properly adjust its height when clock speed is hidden and fan speed is visible
 - GPU Meter's graph does not properly adjust its height when video clock or core voltage are visible
 - The advanced settings system does not currently function. A temporary workaround has been implemented into all skins
 - Sometimes, lines will appear to extend outside the graph boundaries

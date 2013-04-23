SD-utility
==========

Improvements of the standard SD Card lib:

1/ Volume free space in clusters (SDVolume.cpp)
 add new function int32_t SdVolume::freeClusterCount()
 return Count of free clusters for success or -1 if an error occurs.
 function coming from arduino lib

2/ Fix conflict with WIFI chip (Sd2Card.cpp)
 update existing fucntion Sd2Card::chipSelectLow()
 clear INT1 in order to avoid PIC selecting the WIFI chip while SD Card processing on SPI bus.
 fix provided by keithV from Diligent


Before compiling the RobotChipkit libs, this lib must replace the standard MPIDE lib located in
\hardware\pic32\libraries\SD\

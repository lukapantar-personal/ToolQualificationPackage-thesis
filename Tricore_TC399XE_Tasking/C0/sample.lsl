#include "tc_arch.lsl"

architecture TC1V1.3 extends TC
{
}

derivative tc399
{
        core tc
        {
                architecture = TC1V1.3;
        }
                
        bus fpi_bus
        {
                mau = 8;
                width = 32;
                map (dest=bus:tc:fpi_bus, dest_offset=0, size=4G);
        }
                
        memory cpu0_pspr
        {
                mau = 8;
                size = 75K;
                type = ram;
                map (dest=bus:tc:fpi_bus, dest_offset=0x70100000, size=75K);
        }

        memory ldram
        {
                mau = 8;
                size = 56k;
                type = ram;
                // Each core has virtual access to RAM on this address, 
                // but mapped to different physical addresses
                map (dest=bus:tc:fpi_bus, dest_offset=0xD0000000, size=56k);
        }
        
        memory cpu0_dspr
        {
                mau = 8;
                size = 240k;
                type = ram;
                // Each core has virtual access to RAM on this address, 
                // but mapped to different physical addresses
                map (dest=bus:tc:fpi_bus, dest_offset=0x70000000, size=240k);
        }
        
}


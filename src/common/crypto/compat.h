#ifndef HAVE_BYTESWAP_H
#define	__bswap_16(value)  \
 	((((value) & 0xff) << 8) | ((value) >> 8))

#define	__bswap_32(value)	\
 	(((uint32_t)__bswap_16((uint16_t)((value) & 0xffff)) << 16) | \
 	(uint32_t)__bswap_16((uint16_t)((value) >> 16)))
 
#define	__bswap_64(value)	\
 	(((uint64_t)__bswap_32((uint32_t)((value) & 0xffffffff)) \
 	    << 32) | \
 	(uint64_t)__bswap_32((uint32_t)((value) >> 32)))
#endif

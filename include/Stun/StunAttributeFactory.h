#ifndef STUN_ATTRIBUTE_FACTORY_H
#define STUN_ATTRIBUTE_FACTORY_H

#include "Commons/Commons.h"
#include "Stun/StunAttribute.h"

namespace Stun {
  class CStunAttributeFactory {
  public:
    static int CreateSoftwareAttribute(const char* strSoftware, CStunAttribute** lpAttribute);
    static int CreateAddressAttribute(const sockaddr* address, int16_t type, CStunAttribute** lpStunAttribute);
    static int CreateUnknownAttrAttribute(int16_t unknownType, CStunAttribute** lpStunAttribute);
    static int CreateErrorAttribute(int16_t code, const char *reasonPhrase, CStunAttribute** lpStunAttribute);

    static CStunAttribute* MallocStunAttribute(void);
    static void FreeStunAttribute(CStunAttribute* attribute);
  };
}

#endif
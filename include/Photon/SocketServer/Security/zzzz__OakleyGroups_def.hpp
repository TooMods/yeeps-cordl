#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OakleyGroups)
// Forward declare root types
namespace Photon::SocketServer::Security {
class OakleyGroups;
}
// Write type traits
MARK_REF_PTR_T(::Photon::SocketServer::Security::OakleyGroups);
// Type: Photon.SocketServer.Security::OakleyGroups
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::SocketServer::Security {
// Is value type: false
// CS Name: ::Photon.SocketServer.Security::OakleyGroups*
class CORDL_TYPE OakleyGroups : public ::System::Object {
public:
  // Declarations
  /// @brief Field Generator, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_Generator, put = setStaticF_Generator)) int32_t Generator;

  /// @brief Field OakleyPrime1024, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OakleyPrime1024, put = setStaticF_OakleyPrime1024))::ArrayW<uint8_t, ::Array<uint8_t>*> OakleyPrime1024;

  /// @brief Field OakleyPrime1536, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OakleyPrime1536, put = setStaticF_OakleyPrime1536))::ArrayW<uint8_t, ::Array<uint8_t>*> OakleyPrime1536;

  /// @brief Field OakleyPrime768, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OakleyPrime768, put = setStaticF_OakleyPrime768))::ArrayW<uint8_t, ::Array<uint8_t>*> OakleyPrime768;

  static inline int32_t getStaticF_Generator();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_OakleyPrime1024();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_OakleyPrime1536();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_OakleyPrime768();

  static inline void setStaticF_Generator(int32_t value);

  static inline void setStaticF_OakleyPrime1024(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_OakleyPrime1536(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_OakleyPrime768(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OakleyGroups();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OakleyGroups", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OakleyGroups(OakleyGroups&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OakleyGroups", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OakleyGroups(OakleyGroups const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::SocketServer::Security::OakleyGroups, 0x10>, "Size mismatch!");

} // namespace Photon::SocketServer::Security
NEED_NO_BOX(::Photon::SocketServer::Security::OakleyGroups);
DEFINE_IL2CPP_ARG_TYPE(::Photon::SocketServer::Security::OakleyGroups*, "Photon.SocketServer.Security", "OakleyGroups");

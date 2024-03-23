#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IAccessTokenServer)
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class IAccessTokenServer;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::IAccessTokenServer);
// Type: Unity.Services.Vivox::IAccessTokenServer
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::IAccessTokenServer*
class CORDL_TYPE IAccessTokenServer {
public:
  // Declarations
  __declspec(property(get = get_ExpirationTimeSpan))::System::TimeSpan ExpirationTimeSpan;

  __declspec(property(get = get_Issuer))::StringW Issuer;

  __declspec(property(get = get_Key))::StringW Key;

  /// @brief Method get_ExpirationTimeSpan, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::TimeSpan get_ExpirationTimeSpan();

  /// @brief Method get_Issuer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Issuer();

  /// @brief Method get_Key, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Key();

  // Ctor Parameters [CppParam { name: "", ty: "IAccessTokenServer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAccessTokenServer(IAccessTokenServer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAccessTokenServer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAccessTokenServer(IAccessTokenServer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::IAccessTokenServer);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::IAccessTokenServer*, "Unity.Services.Vivox", "IAccessTokenServer");

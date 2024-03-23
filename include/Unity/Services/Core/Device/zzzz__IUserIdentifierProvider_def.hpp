#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IUserIdentifierProvider)
// Forward declare root types
namespace Unity::Services::Core::Device {
class IUserIdentifierProvider;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Device::IUserIdentifierProvider);
// Type: Unity.Services.Core.Device::IUserIdentifierProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Device {
// Is value type: false
// CS Name: ::Unity.Services.Core.Device::IUserIdentifierProvider*
class CORDL_TYPE IUserIdentifierProvider {
public:
  // Declarations
  __declspec(property(get = get_UserId, put = set_UserId))::StringW UserId;

  /// @brief Method get_UserId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_UserId();

  /// @brief Method set_UserId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_UserId(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "IUserIdentifierProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IUserIdentifierProvider(IUserIdentifierProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IUserIdentifierProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IUserIdentifierProvider(IUserIdentifierProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Device
NEED_NO_BOX(::Unity::Services::Core::Device::IUserIdentifierProvider);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Device::IUserIdentifierProvider*, "Unity.Services.Core.Device", "IUserIdentifierProvider");

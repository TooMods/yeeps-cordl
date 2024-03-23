#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ImmutableCredentials_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SSOImmutableCredentials)
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime {
class SSOImmutableCredentials;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::SSOImmutableCredentials);
// Type: Amazon.Runtime::SSOImmutableCredentials
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::SSOImmutableCredentials*
class CORDL_TYPE SSOImmutableCredentials : public ::Amazon::Runtime::ImmutableCredentials {
public:
  // Declarations
  __declspec(property(get = get_Expiration, put = set_Expiration))::System::DateTime Expiration;

  /// @brief Field <Expiration>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Expiration_k__BackingField, put = __cordl_internal_set__Expiration_k__BackingField))::System::DateTime _Expiration_k__BackingField;

  /// @brief Method Copy, addr 0x1ff4768, size 0x80, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::SSOImmutableCredentials* Copy();

  /// @brief Method Equals, addr 0x1ff4938, size 0x2c8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x1ff47e8, size 0x150, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Amazon::Runtime::SSOImmutableCredentials* New_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW token, ::System::DateTime expiration);

  constexpr ::System::DateTime const& __cordl_internal_get__Expiration_k__BackingField() const;

  constexpr ::System::DateTime& __cordl_internal_get__Expiration_k__BackingField();

  constexpr void __cordl_internal_set__Expiration_k__BackingField(::System::DateTime value);

  /// @brief Method .ctor, addr 0x1ff46e4, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW token, ::System::DateTime expiration);

  /// @brief Method get_Expiration, addr 0x1ff46d4, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_Expiration();

  /// @brief Method set_Expiration, addr 0x1ff46dc, size 0x8, virtual false, abstract: false, final false
  inline void set_Expiration(::System::DateTime value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SSOImmutableCredentials();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SSOImmutableCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SSOImmutableCredentials(SSOImmutableCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SSOImmutableCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SSOImmutableCredentials(SSOImmutableCredentials const&) = delete;

  /// @brief Field <Expiration>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::DateTime ____Expiration_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::SSOImmutableCredentials, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::SSOImmutableCredentials, ____Expiration_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::SSOImmutableCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::SSOImmutableCredentials*, "Amazon.Runtime", "SSOImmutableCredentials");

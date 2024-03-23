#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProcessCredentialVersion1)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class ProcessCredentialVersion1;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::ProcessCredentialVersion1);
// Type: Amazon.Runtime.Internal::ProcessCredentialVersion1
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::ProcessCredentialVersion1*
class CORDL_TYPE ProcessCredentialVersion1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AccessKeyId, put = set_AccessKeyId))::StringW AccessKeyId;

  __declspec(property(get = get_Expiration, put = set_Expiration))::System::DateTime Expiration;

  __declspec(property(get = get_SecretAccessKey, put = set_SecretAccessKey))::StringW SecretAccessKey;

  __declspec(property(get = get_SessionToken, put = set_SessionToken))::StringW SessionToken;

  __declspec(property(get = get_Version, put = set_Version)) int32_t Version;

  /// @brief Field <AccessKeyId>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__AccessKeyId_k__BackingField, put = __cordl_internal_set__AccessKeyId_k__BackingField))::StringW _AccessKeyId_k__BackingField;

  /// @brief Field <Expiration>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Expiration_k__BackingField, put = __cordl_internal_set__Expiration_k__BackingField))::System::DateTime _Expiration_k__BackingField;

  /// @brief Field <SecretAccessKey>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__SecretAccessKey_k__BackingField, put = __cordl_internal_set__SecretAccessKey_k__BackingField))::StringW _SecretAccessKey_k__BackingField;

  /// @brief Field <SessionToken>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__SessionToken_k__BackingField, put = __cordl_internal_set__SessionToken_k__BackingField))::StringW _SessionToken_k__BackingField;

  /// @brief Field <Version>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__Version_k__BackingField, put = __cordl_internal_set__Version_k__BackingField)) int32_t _Version_k__BackingField;

  static inline ::Amazon::Runtime::Internal::ProcessCredentialVersion1* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__AccessKeyId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AccessKeyId_k__BackingField();

  constexpr ::System::DateTime const& __cordl_internal_get__Expiration_k__BackingField() const;

  constexpr ::System::DateTime& __cordl_internal_get__Expiration_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__SecretAccessKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__SecretAccessKey_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__SessionToken_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__SessionToken_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__Version_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__Version_k__BackingField();

  constexpr void __cordl_internal_set__AccessKeyId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Expiration_k__BackingField(::System::DateTime value);

  constexpr void __cordl_internal_set__SecretAccessKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__SessionToken_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Version_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x2034f2c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AccessKeyId, addr 0x2034eec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AccessKeyId();

  /// @brief Method get_Expiration, addr 0x2034f1c, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_Expiration();

  /// @brief Method get_SecretAccessKey, addr 0x2034efc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SecretAccessKey();

  /// @brief Method get_SessionToken, addr 0x2034f0c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SessionToken();

  /// @brief Method get_Version, addr 0x2034edc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Method set_AccessKeyId, addr 0x2034ef4, size 0x8, virtual false, abstract: false, final false
  inline void set_AccessKeyId(::StringW value);

  /// @brief Method set_Expiration, addr 0x2034f24, size 0x8, virtual false, abstract: false, final false
  inline void set_Expiration(::System::DateTime value);

  /// @brief Method set_SecretAccessKey, addr 0x2034f04, size 0x8, virtual false, abstract: false, final false
  inline void set_SecretAccessKey(::StringW value);

  /// @brief Method set_SessionToken, addr 0x2034f14, size 0x8, virtual false, abstract: false, final false
  inline void set_SessionToken(::StringW value);

  /// @brief Method set_Version, addr 0x2034ee4, size 0x8, virtual false, abstract: false, final false
  inline void set_Version(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessCredentialVersion1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProcessCredentialVersion1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProcessCredentialVersion1(ProcessCredentialVersion1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProcessCredentialVersion1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProcessCredentialVersion1(ProcessCredentialVersion1 const&) = delete;

  /// @brief Field <Version>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____Version_k__BackingField;

  /// @brief Field <AccessKeyId>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____AccessKeyId_k__BackingField;

  /// @brief Field <SecretAccessKey>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____SecretAccessKey_k__BackingField;

  /// @brief Field <SessionToken>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____SessionToken_k__BackingField;

  /// @brief Field <Expiration>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::DateTime ____Expiration_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::ProcessCredentialVersion1, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::ProcessCredentialVersion1, ____Version_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::ProcessCredentialVersion1, ____AccessKeyId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::ProcessCredentialVersion1, ____SecretAccessKey_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::ProcessCredentialVersion1, ____SessionToken_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::ProcessCredentialVersion1, ____Expiration_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::ProcessCredentialVersion1);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::ProcessCredentialVersion1*, "Amazon.Runtime.Internal", "ProcessCredentialVersion1");

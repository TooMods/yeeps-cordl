#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MintErrorStatus)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Models {
class MintErrorStatus;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Models::MintErrorStatus);
// Type: Unity.Services.Vivox.Mint.Models::MintErrorStatus
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Models {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Models::MintErrorStatus*
class CORDL_TYPE MintErrorStatus : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Code)) int32_t Code;

  __declspec(property(get = get_Detail))::StringW Detail;

  __declspec(property(get = get_ExpiresAt))::System::DateTime ExpiresAt;

  __declspec(property(get = get_RequestId))::StringW RequestId;

  __declspec(property(get = get_Status))::StringW Status;

  __declspec(property(get = get_Type))::StringW Type;

  /// @brief Field <Code>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__Code_k__BackingField, put = __cordl_internal_set__Code_k__BackingField)) int32_t _Code_k__BackingField;

  /// @brief Field <Detail>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Detail_k__BackingField, put = __cordl_internal_set__Detail_k__BackingField))::StringW _Detail_k__BackingField;

  /// @brief Field <ExpiresAt>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__ExpiresAt_k__BackingField, put = __cordl_internal_set__ExpiresAt_k__BackingField))::System::DateTime _ExpiresAt_k__BackingField;

  /// @brief Field <RequestId>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__RequestId_k__BackingField, put = __cordl_internal_set__RequestId_k__BackingField))::StringW _RequestId_k__BackingField;

  /// @brief Field <Status>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Status_k__BackingField, put = __cordl_internal_set__Status_k__BackingField))::StringW _Status_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField))::StringW _Type_k__BackingField;

  /// @brief Method GetAsQueryParam, addr 0x17017f4, size 0x208, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GetAsQueryParam();

  static inline ::Unity::Services::Vivox::Mint::Models::MintErrorStatus* New_ctor(int32_t code, ::StringW status, ::StringW type, ::StringW requestId, ::StringW detail, ::System::DateTime expiresAt);

  /// @brief Method SerializeAsPathParam, addr 0x1701638, size 0x1bc, virtual false, abstract: false, final false
  inline ::StringW SerializeAsPathParam();

  constexpr int32_t const& __cordl_internal_get__Code_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__Code_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Detail_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Detail_k__BackingField();

  constexpr ::System::DateTime const& __cordl_internal_get__ExpiresAt_k__BackingField() const;

  constexpr ::System::DateTime& __cordl_internal_get__ExpiresAt_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__RequestId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__RequestId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Status_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Status_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Type_k__BackingField();

  constexpr void __cordl_internal_set__Code_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__Detail_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ExpiresAt_k__BackingField(::System::DateTime value);

  constexpr void __cordl_internal_set__RequestId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Status_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Type_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x17015b0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(int32_t code, ::StringW status, ::StringW type, ::StringW requestId, ::StringW detail, ::System::DateTime expiresAt);

  /// @brief Method get_Code, addr 0x1701608, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Code();

  /// @brief Method get_Detail, addr 0x1701628, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Detail();

  /// @brief Method get_ExpiresAt, addr 0x1701630, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_ExpiresAt();

  /// @brief Method get_RequestId, addr 0x1701620, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RequestId();

  /// @brief Method get_Status, addr 0x1701610, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Status();

  /// @brief Method get_Type, addr 0x1701618, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MintErrorStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MintErrorStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MintErrorStatus(MintErrorStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MintErrorStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MintErrorStatus(MintErrorStatus const&) = delete;

  /// @brief Field <Code>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____Code_k__BackingField;

  /// @brief Field <Status>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Status_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Type_k__BackingField;

  /// @brief Field <RequestId>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____RequestId_k__BackingField;

  /// @brief Field <Detail>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____Detail_k__BackingField;

  /// @brief Field <ExpiresAt>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::System::DateTime ____ExpiresAt_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Models::MintErrorStatus, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Models::MintErrorStatus, ____Code_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Models::MintErrorStatus, ____Status_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Models::MintErrorStatus, ____Type_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Models::MintErrorStatus, ____RequestId_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Models::MintErrorStatus, ____Detail_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Models::MintErrorStatus, ____ExpiresAt_k__BackingField) == 0x38, "Offset mismatch!");

} // namespace Unity::Services::Vivox::Mint::Models
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Models::MintErrorStatus);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Models::MintErrorStatus*, "Unity.Services.Vivox.Mint.Models", "MintErrorStatus");

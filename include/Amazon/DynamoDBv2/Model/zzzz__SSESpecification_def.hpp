#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SSESpecification)
namespace Amazon::DynamoDBv2 {
class SSEType;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class SSESpecification;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::SSESpecification);
// Type: Amazon.DynamoDBv2.Model::SSESpecification
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::SSESpecification*
class CORDL_TYPE SSESpecification : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Enabled, put = set_Enabled)) bool Enabled;

  __declspec(property(get = get_KMSMasterKeyId, put = set_KMSMasterKeyId))::StringW KMSMasterKeyId;

  __declspec(property(get = get_SSEType, put = set_SSEType))::Amazon::DynamoDBv2::SSEType* SSEType;

  /// @brief Field _enabled, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get__enabled, put = __cordl_internal_set__enabled))::System::Nullable_1<bool> _enabled;

  /// @brief Field _kmsMasterKeyId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__kmsMasterKeyId, put = __cordl_internal_set__kmsMasterKeyId))::StringW _kmsMasterKeyId;

  /// @brief Field _sseType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sseType, put = __cordl_internal_set__sseType))::Amazon::DynamoDBv2::SSEType* _sseType;

  /// @brief Method IsSetEnabled, addr 0x10518a8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetEnabled();

  /// @brief Method IsSetKMSMasterKeyId, addr 0x10518f4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetKMSMasterKeyId();

  /// @brief Method IsSetSSEType, addr 0x1051914, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetSSEType();

  static inline ::Amazon::DynamoDBv2::Model::SSESpecification* New_ctor();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__enabled() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__enabled();

  constexpr ::StringW const& __cordl_internal_get__kmsMasterKeyId() const;

  constexpr ::StringW& __cordl_internal_get__kmsMasterKeyId();

  constexpr ::Amazon::DynamoDBv2::SSEType*& __cordl_internal_get__sseType();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::SSEType*> const& __cordl_internal_get__sseType() const;

  constexpr void __cordl_internal_set__enabled(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__kmsMasterKeyId(::StringW value);

  constexpr void __cordl_internal_set__sseType(::Amazon::DynamoDBv2::SSEType* value);

  /// @brief Method .ctor, addr 0x1051974, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Enabled, addr 0x1051804, size 0x3c, virtual false, abstract: false, final false
  inline bool get_Enabled();

  /// @brief Method get_KMSMasterKeyId, addr 0x10518e4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_KMSMasterKeyId();

  /// @brief Method get_SSEType, addr 0x1051904, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::SSEType* get_SSEType();

  /// @brief Method set_Enabled, addr 0x1051840, size 0x68, virtual false, abstract: false, final false
  inline void set_Enabled(bool value);

  /// @brief Method set_KMSMasterKeyId, addr 0x10518ec, size 0x8, virtual false, abstract: false, final false
  inline void set_KMSMasterKeyId(::StringW value);

  /// @brief Method set_SSEType, addr 0x105190c, size 0x8, virtual false, abstract: false, final false
  inline void set_SSEType(::Amazon::DynamoDBv2::SSEType* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SSESpecification();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SSESpecification", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SSESpecification(SSESpecification&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SSESpecification", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SSESpecification(SSESpecification const&) = delete;

  /// @brief Field _enabled, offset: 0x10, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____enabled;

  /// @brief Field _kmsMasterKeyId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____kmsMasterKeyId;

  /// @brief Field _sseType, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::SSEType* ____sseType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::SSESpecification, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::SSESpecification, ____enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::SSESpecification, ____kmsMasterKeyId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::SSESpecification, ____sseType) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::SSESpecification);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::SSESpecification*, "Amazon.DynamoDBv2.Model", "SSESpecification");

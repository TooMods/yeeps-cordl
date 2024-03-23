#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Identity)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class Identity;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::Identity);
// Type: Amazon.DynamoDBv2.Model::Identity
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::Identity*
class CORDL_TYPE Identity : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_PrincipalId, put = set_PrincipalId))::StringW PrincipalId;

  __declspec(property(get = get_Type, put = set_Type))::StringW Type;

  /// @brief Field _principalId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__principalId, put = __cordl_internal_set__principalId))::StringW _principalId;

  /// @brief Field _type, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type))::StringW _type;

  /// @brief Method IsSetPrincipalId, addr 0x1049dbc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetPrincipalId();

  /// @brief Method IsSetType, addr 0x1049ddc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetType();

  static inline ::Amazon::DynamoDBv2::Model::Identity* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__principalId() const;

  constexpr ::StringW& __cordl_internal_get__principalId();

  constexpr ::StringW const& __cordl_internal_get__type() const;

  constexpr ::StringW& __cordl_internal_get__type();

  constexpr void __cordl_internal_set__principalId(::StringW value);

  constexpr void __cordl_internal_set__type(::StringW value);

  /// @brief Method .ctor, addr 0x1049dec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_PrincipalId, addr 0x1049dac, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PrincipalId();

  /// @brief Method get_Type, addr 0x1049dcc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Type();

  /// @brief Method set_PrincipalId, addr 0x1049db4, size 0x8, virtual false, abstract: false, final false
  inline void set_PrincipalId(::StringW value);

  /// @brief Method set_Type, addr 0x1049dd4, size 0x8, virtual false, abstract: false, final false
  inline void set_Type(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Identity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Identity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Identity(Identity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Identity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Identity(Identity const&) = delete;

  /// @brief Field _principalId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____principalId;

  /// @brief Field _type, offset: 0x18, size: 0x8, def value: None
  ::StringW ____type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::Identity, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Identity, ____principalId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Identity, ____type) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::Identity);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::Identity*, "Amazon.DynamoDBv2.Model", "Identity");

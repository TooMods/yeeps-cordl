#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Projection)
namespace Amazon::DynamoDBv2 {
class ProjectionType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class Projection;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::Projection);
// Type: Amazon.DynamoDBv2.Model::Projection
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::Projection*
class CORDL_TYPE Projection : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_NonKeyAttributes, put = set_NonKeyAttributes))::System::Collections::Generic::List_1<::StringW>* NonKeyAttributes;

  __declspec(property(get = get_ProjectionType, put = set_ProjectionType))::Amazon::DynamoDBv2::ProjectionType* ProjectionType;

  /// @brief Field _nonKeyAttributes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__nonKeyAttributes, put = __cordl_internal_set__nonKeyAttributes))::System::Collections::Generic::List_1<::StringW>* _nonKeyAttributes;

  /// @brief Field _projectionType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__projectionType, put = __cordl_internal_set__projectionType))::Amazon::DynamoDBv2::ProjectionType* _projectionType;

  /// @brief Method IsSetNonKeyAttributes, addr 0x104c0c0, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetNonKeyAttributes();

  /// @brief Method IsSetProjectionType, addr 0x104c124, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetProjectionType();

  static inline ::Amazon::DynamoDBv2::Model::Projection* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__nonKeyAttributes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__nonKeyAttributes() const;

  constexpr ::Amazon::DynamoDBv2::ProjectionType*& __cordl_internal_get__projectionType();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ProjectionType*> const& __cordl_internal_get__projectionType() const;

  constexpr void __cordl_internal_set__nonKeyAttributes(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__projectionType(::Amazon::DynamoDBv2::ProjectionType* value);

  /// @brief Method .ctor, addr 0x104c184, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_NonKeyAttributes, addr 0x104c0b0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_NonKeyAttributes();

  /// @brief Method get_ProjectionType, addr 0x104c114, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ProjectionType* get_ProjectionType();

  /// @brief Method set_NonKeyAttributes, addr 0x104c0b8, size 0x8, virtual false, abstract: false, final false
  inline void set_NonKeyAttributes(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_ProjectionType, addr 0x104c11c, size 0x8, virtual false, abstract: false, final false
  inline void set_ProjectionType(::Amazon::DynamoDBv2::ProjectionType* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Projection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Projection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Projection(Projection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Projection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Projection(Projection const&) = delete;

  /// @brief Field _nonKeyAttributes, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____nonKeyAttributes;

  /// @brief Field _projectionType, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ProjectionType* ____projectionType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::Projection, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Projection, ____nonKeyAttributes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Projection, ____projectionType) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::Projection);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::Projection*, "Amazon.DynamoDBv2.Model", "Projection");

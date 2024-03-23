#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrimitiveComparer)
namespace Amazon::DynamoDBv2::DocumentModel {
class Primitive;
}
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class PrimitiveComparer;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer);
// Type: Amazon.DynamoDBv2.DocumentModel::PrimitiveComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::PrimitiveComparer*
class CORDL_TYPE PrimitiveComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer* Default;

  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*() noexcept;

  /// @brief Method Compare, addr 0x1659934, size 0x230, virtual true, abstract: false, final true
  inline int32_t Compare(::Amazon::DynamoDBv2::DocumentModel::Primitive* x, ::Amazon::DynamoDBv2::DocumentModel::Primitive* y);

  static inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer* New_ctor();

  /// @brief Method .ctor, addr 0x1659b64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer* getStaticF_Default();

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>"
  constexpr ::System::Collections::Generic::IComparer_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*
  i___System__Collections__Generic__IComparer_1___Amazon__DynamoDBv2__DocumentModel__Primitive__() noexcept;

  static inline void setStaticF_Default(::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrimitiveComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrimitiveComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrimitiveComparer(PrimitiveComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrimitiveComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrimitiveComparer(PrimitiveComparer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::PrimitiveComparer*, "Amazon.DynamoDBv2.DocumentModel", "PrimitiveComparer");

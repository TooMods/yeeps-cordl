#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeyComparer)
namespace Amazon::DynamoDBv2::DocumentModel {
class Key;
}
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class KeyComparer;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::KeyComparer);
// Type: Amazon.DynamoDBv2.DocumentModel::KeyComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::KeyComparer*
class CORDL_TYPE KeyComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Amazon::DynamoDBv2::DocumentModel::Key*>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::Amazon::DynamoDBv2::DocumentModel::Key*>*() noexcept;

  /// @brief Method AreBothNull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool AreBothNull(T x, T y);

  /// @brief Method CompareAttributeValue, addr 0x164cc70, size 0x2dc, virtual false, abstract: false, final false
  static inline bool CompareAttributeValue(::Amazon::DynamoDBv2::Model::AttributeValue* x, ::Amazon::DynamoDBv2::Model::AttributeValue* y);

  /// @brief Method Equals, addr 0x164ca20, size 0x250, virtual true, abstract: false, final true
  inline bool Equals(::Amazon::DynamoDBv2::DocumentModel::Key* x, ::Amazon::DynamoDBv2::DocumentModel::Key* y);

  /// @brief Method GetHashCode, addr 0x164d0a4, size 0xd4, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::Amazon::DynamoDBv2::Model::AttributeValue* attributeValue);

  /// @brief Method GetHashCode, addr 0x164cf4c, size 0x158, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::Amazon::DynamoDBv2::DocumentModel::Key* key);

  /// @brief Method IsEitherNull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool IsEitherNull(T x, T y);

  static inline ::Amazon::DynamoDBv2::DocumentModel::KeyComparer* New_ctor();

  /// @brief Method .ctor, addr 0x164b688, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Amazon::DynamoDBv2::DocumentModel::Key*>"
  constexpr ::System::Collections::Generic::IEqualityComparer_1<::Amazon::DynamoDBv2::DocumentModel::Key*>*
  i___System__Collections__Generic__IEqualityComparer_1___Amazon__DynamoDBv2__DocumentModel__Key__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyComparer(KeyComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyComparer(KeyComparer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::KeyComparer, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::KeyComparer);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::KeyComparer*, "Amazon.DynamoDBv2.DocumentModel", "KeyComparer");

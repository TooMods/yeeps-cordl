#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/Model/zzzz__AttributeValue_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Key)
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class Key;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::Key);
// Type: Amazon.DynamoDBv2.DocumentModel::Key
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::Key*
class CORDL_TYPE Key : public ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*> {
public:
  // Declarations
  static inline ::Amazon::DynamoDBv2::DocumentModel::Key* New_ctor();

  static inline ::Amazon::DynamoDBv2::DocumentModel::Key* New_ctor(::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* values);

  /// @brief Method .ctor, addr 0x141f7b4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x141f75c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* values);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Key();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Key", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Key(Key&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Key", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Key(Key const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::Key, 0x50>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::Key);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::Key*, "Amazon.DynamoDBv2.DocumentModel", "Key");

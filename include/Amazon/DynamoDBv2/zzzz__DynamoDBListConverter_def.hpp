#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__CollectionConverter_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(DynamoDBListConverter)
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBList;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class DynamoDBListConverter;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DynamoDBListConverter);
// Type: Amazon.DynamoDBv2::DynamoDBListConverter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::DynamoDBListConverter*
class CORDL_TYPE DynamoDBListConverter : public ::Amazon::DynamoDBv2::CollectionConverter {
public:
  // Declarations
  static inline ::Amazon::DynamoDBv2::DynamoDBListConverter* New_ctor();

  static inline ::Amazon::DynamoDBv2::DynamoDBListConverter* New_ctor(::System::Collections::Generic::IEnumerable_1<::System::Type*>* memberTypes);

  /// @brief Method TryFrom, addr 0x120f18c, size 0x94, virtual true, abstract: false, final false
  inline bool TryFrom(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* l, ::System::Type* targetType, ByRef<::System::Object*> result);

  /// @brief Method TryTo, addr 0x120ee04, size 0x388, virtual true, abstract: false, final false
  inline bool TryTo(::System::Object* value, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*> l);

  /// @brief Method .ctor, addr 0x120ed60, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x120edd4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Type*>* memberTypes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamoDBListConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBListConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamoDBListConverter(DynamoDBListConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBListConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamoDBListConverter(DynamoDBListConverter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DynamoDBListConverter, 0x20>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::DynamoDBListConverter);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DynamoDBListConverter*, "Amazon.DynamoDBv2", "DynamoDBListConverter");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__PrimitiveCollectionConverterV1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(CollectionConverterV2)
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBList;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class PrimitiveList;
}
namespace Amazon::Util::Internal {
class ITypeInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class CollectionConverterV2;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::CollectionConverterV2);
// Type: Amazon.DynamoDBv2::CollectionConverterV2
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::CollectionConverterV2*
class CORDL_TYPE CollectionConverterV2 : public ::Amazon::DynamoDBv2::PrimitiveCollectionConverterV1 {
public:
  // Declarations
  /// @brief Field enumerableType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_enumerableType, put = setStaticF_enumerableType))::System::Type* enumerableType;

  /// @brief Field setTypeInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_setTypeInfo, put = setStaticF_setTypeInfo))::Amazon::Util::Internal::ITypeInfo* setTypeInfo;

  static inline ::Amazon::DynamoDBv2::CollectionConverterV2* New_ctor();

  /// @brief Method TryTo, addr 0x120eaf4, size 0x16c, virtual true, abstract: false, final false
  inline bool TryTo(::System::Object* value, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*> l);

  /// @brief Method TryTo, addr 0x120e87c, size 0x278, virtual true, abstract: false, final false
  inline bool TryTo(::System::Object* value, ByRef<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*> pl);

  /// @brief Method .ctor, addr 0x120ec60, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Type* getStaticF_enumerableType();

  static inline ::Amazon::Util::Internal::ITypeInfo* getStaticF_setTypeInfo();

  static inline void setStaticF_enumerableType(::System::Type* value);

  static inline void setStaticF_setTypeInfo(::Amazon::Util::Internal::ITypeInfo* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionConverterV2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectionConverterV2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionConverterV2(CollectionConverterV2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionConverterV2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionConverterV2(CollectionConverterV2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::CollectionConverterV2, 0x20>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::CollectionConverterV2);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::CollectionConverterV2*, "Amazon.DynamoDBv2", "CollectionConverterV2");

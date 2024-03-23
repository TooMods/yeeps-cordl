#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(ConverterCache)
namespace Amazon::DynamoDBv2 {
class Converter;
}
namespace Amazon::DynamoDBv2 {
class DynamoDBEntryConversion;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class ConverterCache;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::ConverterCache);
// Type: Amazon.DynamoDBv2::ConverterCache
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::ConverterCache*
class CORDL_TYPE ConverterCache : public ::System::Object {
public:
  // Declarations
  /// @brief Field Cache, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Cache, put = __cordl_internal_set_Cache))::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::Converter*>* Cache;

  /// @brief Field EnumType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EnumType, put = setStaticF_EnumType))::System::Type* EnumType;

  /// @brief Method AddConverter, addr 0x1209f8c, size 0x3d8, virtual false, abstract: false, final false
  inline void AddConverter(::Amazon::DynamoDBv2::Converter* converter, ::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion);

  /// @brief Method GetConverter, addr 0x1208a00, size 0xa8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Converter* GetConverter(::System::Type* type);

  /// @brief Method HasConverter, addr 0x12088d0, size 0x1c, virtual false, abstract: false, final false
  inline bool HasConverter(::System::Type* type);

  static inline ::Amazon::DynamoDBv2::ConverterCache* New_ctor();

  /// @brief Method TryGetConverter, addr 0x120b3e4, size 0x1c8, virtual false, abstract: false, final false
  inline bool TryGetConverter(::System::Type* type, ByRef<::Amazon::DynamoDBv2::Converter*> converter);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::Converter*>*& __cordl_internal_get_Cache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::Converter*>*> const& __cordl_internal_get_Cache() const;

  constexpr void __cordl_internal_set_Cache(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::Converter*>* value);

  /// @brief Method .ctor, addr 0x12086b4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Type* getStaticF_EnumType();

  static inline void setStaticF_EnumType(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConverterCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConverterCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConverterCache(ConverterCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConverterCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConverterCache(ConverterCache const&) = delete;

  /// @brief Field Cache, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::Converter*>* ___Cache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::ConverterCache, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::ConverterCache, ___Cache) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::ConverterCache);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::ConverterCache*, "Amazon.DynamoDBv2", "ConverterCache");

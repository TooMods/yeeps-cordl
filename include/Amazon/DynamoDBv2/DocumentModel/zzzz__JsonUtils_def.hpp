#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonUtils)
namespace Amazon::DynamoDBv2::DocumentModel {
class Document;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct DynamoDBEntryType;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBEntry;
}
namespace Amazon::DynamoDBv2 {
class DynamoDBEntryConversion;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
namespace ThirdParty::Json::LitJson {
class JsonData;
}
namespace ThirdParty::Json::LitJson {
class JsonWriter;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class JsonUtils;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::JsonUtils);
// Type: Amazon.DynamoDBv2.DocumentModel::JsonUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::JsonUtils*
class CORDL_TYPE JsonUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method DecodeBase64Attributes, addr 0x16570c0, size 0x368, virtual false, abstract: false, final false
  static inline void DecodeBase64Attributes(::Amazon::DynamoDBv2::DocumentModel::Document* document, ::ArrayW<::StringW, ::Array<::StringW>*> attributeNames);

  /// @brief Method FirstIndex, addr 0x1657034, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t FirstIndex(::System::Text::StringBuilder* sb, char16_t toMatch);

  /// @brief Method FromJson, addr 0x16563d0, size 0x19c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Document* FromJson(::StringW jsonText);

  /// @brief Method FromJsonArray, addr 0x1656c54, size 0x2a0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* FromJsonArray(::StringW jsonText);

  /// @brief Method ToEntry, addr 0x165656c, size 0x6e8, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* ToEntry(::ThirdParty::Json::LitJson::JsonData* data, ::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion);

  /// @brief Method ToJson, addr 0x1656ef4, size 0x140, virtual false, abstract: false, final false
  static inline ::StringW ToJson(::Amazon::DynamoDBv2::DocumentModel::Document* document, bool prettyPrint);

  /// @brief Method TryDecodeBase64, addr 0x1657830, size 0xe8, virtual false, abstract: false, final false
  static inline bool TryDecodeBase64(::StringW base64Data, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> bytes);

  /// @brief Method TryDecodeBase64, addr 0x1657428, size 0x408, virtual false, abstract: false, final false
  static inline bool TryDecodeBase64(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* entry, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*> decodedEntry);

  /// @brief Method WriteJson, addr 0x164d564, size 0x764, virtual false, abstract: false, final false
  static inline void WriteJson(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* entry, ::ThirdParty::Json::LitJson::JsonWriter* writer, ::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion);

  /// @brief Method WritePrimitive, addr 0x1657a80, size 0x1a0, virtual false, abstract: false, final false
  static inline void WritePrimitive(::ThirdParty::Json::LitJson::JsonWriter* writer, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType type, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonUtils(JsonUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonUtils(JsonUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::JsonUtils, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::JsonUtils);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::JsonUtils*, "Amazon.DynamoDBv2.DocumentModel", "JsonUtils");

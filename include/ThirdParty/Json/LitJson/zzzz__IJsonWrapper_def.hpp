#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IJsonWrapper)
namespace System::Collections::Specialized {
class IOrderedDictionary;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IList;
}
namespace ThirdParty::Json::LitJson {
struct JsonType;
}
namespace ThirdParty::Json::LitJson {
class JsonWriter;
}
// Forward declare root types
namespace ThirdParty::Json::LitJson {
class IJsonWrapper;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::Json::LitJson::IJsonWrapper);
// Type: ThirdParty.Json.LitJson::IJsonWrapper
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ThirdParty::Json::LitJson {
// Is value type: false
// CS Name: ::ThirdParty.Json.LitJson::IJsonWrapper*
class CORDL_TYPE IJsonWrapper {
public:
  // Declarations
  __declspec(property(get = get_IsArray)) bool IsArray;

  __declspec(property(get = get_IsBoolean)) bool IsBoolean;

  __declspec(property(get = get_IsDouble)) bool IsDouble;

  __declspec(property(get = get_IsInt)) bool IsInt;

  __declspec(property(get = get_IsLong)) bool IsLong;

  __declspec(property(get = get_IsObject)) bool IsObject;

  __declspec(property(get = get_IsString)) bool IsString;

  __declspec(property(get = get_IsUInt)) bool IsUInt;

  __declspec(property(get = get_IsULong)) bool IsULong;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IDictionary"
  constexpr operator ::System::Collections::IDictionary*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Convert operator to "::System::Collections::Specialized::IOrderedDictionary"
  constexpr operator ::System::Collections::Specialized::IOrderedDictionary*() noexcept;

  /// @brief Method GetBoolean, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool GetBoolean();

  /// @brief Method GetDouble, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline double_t GetDouble();

  /// @brief Method GetInt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetInt();

  /// @brief Method GetJsonType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ThirdParty::Json::LitJson::JsonType GetJsonType();

  /// @brief Method GetLong, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t GetLong();

  /// @brief Method GetString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetString();

  /// @brief Method GetUInt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline uint32_t GetUInt();

  /// @brief Method GetULong, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline uint64_t GetULong();

  /// @brief Method SetBoolean, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetBoolean(bool val);

  /// @brief Method SetDouble, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetDouble(double_t val);

  /// @brief Method SetInt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetInt(int32_t val);

  /// @brief Method SetJsonType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetJsonType(::ThirdParty::Json::LitJson::JsonType type);

  /// @brief Method SetLong, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetLong(int64_t val);

  /// @brief Method SetString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetString(::StringW val);

  /// @brief Method SetUInt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetUInt(uint32_t val);

  /// @brief Method SetULong, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetULong(uint64_t val);

  /// @brief Method ToJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW ToJson();

  /// @brief Method ToJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ToJson(::ThirdParty::Json::LitJson::JsonWriter* writer);

  /// @brief Method get_IsArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsArray();

  /// @brief Method get_IsBoolean, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsBoolean();

  /// @brief Method get_IsDouble, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsDouble();

  /// @brief Method get_IsInt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsInt();

  /// @brief Method get_IsLong, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsLong();

  /// @brief Method get_IsObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsObject();

  /// @brief Method get_IsString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsString();

  /// @brief Method get_IsUInt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsUInt();

  /// @brief Method get_IsULong, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsULong();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IDictionary"
  constexpr ::System::Collections::IDictionary* i___System__Collections__IDictionary() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IList"
  constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

  /// @brief Convert to "::System::Collections::Specialized::IOrderedDictionary"
  constexpr ::System::Collections::Specialized::IOrderedDictionary* i___System__Collections__Specialized__IOrderedDictionary() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IJsonWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IJsonWrapper(IJsonWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IJsonWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IJsonWrapper(IJsonWrapper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace ThirdParty::Json::LitJson
NEED_NO_BOX(::ThirdParty::Json::LitJson::IJsonWrapper);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::Json::LitJson::IJsonWrapper*, "ThirdParty.Json.LitJson", "IJsonWrapper");

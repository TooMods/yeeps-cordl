#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GA_MiniJSON)
namespace GameAnalyticsSDK::Utilities {
class __GA_MiniJSON__Parser;
}
namespace GameAnalyticsSDK::Utilities {
class __GA_MiniJSON__Serializer;
}
namespace GlobalNamespace {
struct __GA_MiniJSON__Parser__TOKEN;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class StringReader;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct __GA_MiniJSON__Parser__TOKEN;
}
namespace GameAnalyticsSDK::Utilities {
class GA_MiniJSON;
}
namespace GameAnalyticsSDK::Utilities {
class __GA_MiniJSON__Parser;
}
namespace GameAnalyticsSDK::Utilities {
class __GA_MiniJSON__Serializer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN);
MARK_REF_PTR_T(::GameAnalyticsSDK::Utilities::GA_MiniJSON);
MARK_REF_PTR_T(::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser);
MARK_REF_PTR_T(::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer);
// Type: ::TOKEN
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::GA_MiniJSON::Parser::TOKEN
struct CORDL_TYPE __GA_MiniJSON__Parser__TOKEN {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GA_MiniJSON__Parser__TOKEN_Unwrapped
  enum struct ____GA_MiniJSON__Parser__TOKEN_Unwrapped : int32_t {
    __E_NONE = static_cast<int32_t>(0x0),
    __E_CURLY_OPEN = static_cast<int32_t>(0x1),
    __E_CURLY_CLOSE = static_cast<int32_t>(0x2),
    __E_SQUARED_OPEN = static_cast<int32_t>(0x3),
    __E_SQUARED_CLOSE = static_cast<int32_t>(0x4),
    __E_COLON = static_cast<int32_t>(0x5),
    __E_COMMA = static_cast<int32_t>(0x6),
    __E_STRING = static_cast<int32_t>(0x7),
    __E_NUMBER = static_cast<int32_t>(0x8),
    __E_TRUE = static_cast<int32_t>(0x9),
    __E_FALSE = static_cast<int32_t>(0xa),
    __E_NULL = static_cast<int32_t>(0xb),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GA_MiniJSON__Parser__TOKEN_Unwrapped() const noexcept {
    return static_cast<____GA_MiniJSON__Parser__TOKEN_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GA_MiniJSON__Parser__TOKEN();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GA_MiniJSON__Parser__TOKEN(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field COLON value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN const COLON;

  /// @brief Field COMMA value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN const COMMA;

  /// @brief Field CURLY_CLOSE value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN const CURLY_CLOSE;

  /// @brief Field CURLY_OPEN value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN const CURLY_OPEN;

  /// @brief Field FALSE value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN const FALSE;

  /// @brief Field NONE value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN const NONE;

  /// @brief Field NUMBER value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN const NUMBER;

  /// @brief Field SQUARED_CLOSE value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN const SQUARED_CLOSE;

  /// @brief Field SQUARED_OPEN value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN const SQUARED_OPEN;

  /// @brief Field STRING value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN const STRING;

  /// @brief Field TRUE value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN const TRUE;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field NULL value: static_cast<int32_t>(0xb)
  static ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN const _cordl_NULL;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Parser
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GameAnalyticsSDK::Utilities {
// Is value type: false
// CS Name: ::GA_MiniJSON::Parser*
class CORDL_TYPE __GA_MiniJSON__Parser : public ::System::Object {
public:
  // Declarations
  using TOKEN = ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN;

  __declspec(property(get = get_NextChar)) char16_t NextChar;

  __declspec(property(get = get_NextToken))::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN NextToken;

  __declspec(property(get = get_NextWord))::StringW NextWord;

  __declspec(property(get = get_PeekChar)) char16_t PeekChar;

  /// @brief Field json, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_json, put = __cordl_internal_set_json))::System::IO::StringReader* json;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x107e470, size 0x28, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method EatWhitespace, addr 0x107ede0, size 0xa4, virtual false, abstract: false, final false
  inline void EatWhitespace();

  /// @brief Method IsWordBreak, addr 0x107e33c, size 0x9c, virtual false, abstract: false, final false
  static inline bool IsWordBreak(char16_t c);

  static inline ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser* New_ctor(::StringW jsonString);

  /// @brief Method Parse, addr 0x107e124, size 0x19c, virtual false, abstract: false, final false
  static inline ::System::Object* Parse(::StringW jsonString);

  /// @brief Method ParseArray, addr 0x107e9e0, size 0x124, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::Object*>* ParseArray();

  /// @brief Method ParseByToken, addr 0x107eb04, size 0xe8, virtual false, abstract: false, final false
  inline ::System::Object* ParseByToken(::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN token);

  /// @brief Method ParseNumber, addr 0x107ebec, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Object* ParseNumber();

  /// @brief Method ParseObject, addr 0x107e498, size 0x124, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* ParseObject();

  /// @brief Method ParseString, addr 0x107e780, size 0x260, virtual false, abstract: false, final false
  inline ::StringW ParseString();

  /// @brief Method ParseValue, addr 0x107e454, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Object* ParseValue();

  constexpr ::System::IO::StringReader*& __cordl_internal_get_json();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::StringReader*> const& __cordl_internal_get_json() const;

  constexpr void __cordl_internal_set_json(::System::IO::StringReader* value);

  /// @brief Method .ctor, addr 0x107e3d8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::StringW jsonString);

  /// @brief Method get_NextChar, addr 0x107ecbc, size 0x78, virtual false, abstract: false, final false
  inline char16_t get_NextChar();

  /// @brief Method get_NextToken, addr 0x107e5bc, size 0x1c4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN get_NextToken();

  /// @brief Method get_NextWord, addr 0x107ed34, size 0xac, virtual false, abstract: false, final false
  inline ::StringW get_NextWord();

  /// @brief Method get_PeekChar, addr 0x107ee84, size 0x78, virtual false, abstract: false, final false
  inline char16_t get_PeekChar();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GA_MiniJSON__Parser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GA_MiniJSON__Parser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GA_MiniJSON__Parser(__GA_MiniJSON__Parser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GA_MiniJSON__Parser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GA_MiniJSON__Parser(__GA_MiniJSON__Parser const&) = delete;

  /// @brief Field json, offset: 0x10, size: 0x8, def value: None
  ::System::IO::StringReader* ___json;

  /// @brief Field WORD_BREAK offset 0xffffffff size 0x8
  static constexpr ::ConstString WORD_BREAK{ u"{}[],:\"" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser, 0x18>, "Size mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser, ___json) == 0x10, "Offset mismatch!");

} // namespace GameAnalyticsSDK::Utilities
// Type: ::Serializer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GameAnalyticsSDK::Utilities {
// Is value type: false
// CS Name: ::GA_MiniJSON::Serializer*
class CORDL_TYPE __GA_MiniJSON__Serializer : public ::System::Object {
public:
  // Declarations
  /// @brief Field builder, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_builder, put = __cordl_internal_set_builder))::System::Text::StringBuilder* builder;

  static inline ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer* New_ctor();

  /// @brief Method Serialize, addr 0x107e2c0, size 0x74, virtual false, abstract: false, final false
  static inline ::StringW Serialize(::System::Object* obj);

  /// @brief Method SerializeArray, addr 0x107f424, size 0x360, virtual false, abstract: false, final false
  inline void SerializeArray(::System::Collections::IList* anArray);

  /// @brief Method SerializeObject, addr 0x107f784, size 0x48c, virtual false, abstract: false, final false
  inline void SerializeObject(::System::Collections::IDictionary* obj);

  /// @brief Method SerializeOther, addr 0x107fc10, size 0x2d0, virtual false, abstract: false, final false
  inline void SerializeOther(::System::Object* value);

  /// @brief Method SerializeString, addr 0x107f138, size 0x2ec, virtual false, abstract: false, final false
  inline void SerializeString(::StringW str);

  /// @brief Method SerializeValue, addr 0x107ef68, size 0x1d0, virtual false, abstract: false, final false
  inline void SerializeValue(::System::Object* value);

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_builder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get_builder() const;

  constexpr void __cordl_internal_set_builder(::System::Text::StringBuilder* value);

  /// @brief Method .ctor, addr 0x107eefc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GA_MiniJSON__Serializer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GA_MiniJSON__Serializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GA_MiniJSON__Serializer(__GA_MiniJSON__Serializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GA_MiniJSON__Serializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GA_MiniJSON__Serializer(__GA_MiniJSON__Serializer const&) = delete;

  /// @brief Field builder, offset: 0x10, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___builder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer, 0x18>, "Size mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer, ___builder) == 0x10, "Offset mismatch!");

} // namespace GameAnalyticsSDK::Utilities
// Type: GameAnalyticsSDK.Utilities::GA_MiniJSON
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GameAnalyticsSDK::Utilities {
// Is value type: false
// CS Name: ::GameAnalyticsSDK.Utilities::GA_MiniJSON*
class CORDL_TYPE GA_MiniJSON : public ::System::Object {
public:
  // Declarations
  using Parser = ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser;

  using Serializer = ::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer;

  /// @brief Method Deserialize, addr 0x1078468, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Object* Deserialize(::StringW json);

  static inline ::GameAnalyticsSDK::Utilities::GA_MiniJSON* New_ctor();

  /// @brief Method Serialize, addr 0x107defc, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW Serialize(::System::Object* obj);

  /// @brief Method .ctor, addr 0x107e334, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GA_MiniJSON();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GA_MiniJSON", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GA_MiniJSON(GA_MiniJSON&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GA_MiniJSON", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GA_MiniJSON(GA_MiniJSON const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::Utilities::GA_MiniJSON, 0x10>, "Size mismatch!");

} // namespace GameAnalyticsSDK::Utilities
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GA_MiniJSON__Parser__TOKEN, "GameAnalyticsSDK.Utilities", "GA_MiniJSON/Parser/TOKEN");
NEED_NO_BOX(::GameAnalyticsSDK::Utilities::GA_MiniJSON);
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::Utilities::GA_MiniJSON*, "GameAnalyticsSDK.Utilities", "GA_MiniJSON");
NEED_NO_BOX(::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser);
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Parser*, "GameAnalyticsSDK.Utilities", "GA_MiniJSON/Parser");
NEED_NO_BOX(::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer);
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::Utilities::__GA_MiniJSON__Serializer*, "GameAnalyticsSDK.Utilities", "GA_MiniJSON/Serializer");

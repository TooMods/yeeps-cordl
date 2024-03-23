#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "ThirdParty/Json/LitJson/zzzz__JsonToken_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonReader)
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System::IO {
class TextReader;
}
namespace System {
class Object;
}
namespace ThirdParty::Json::LitJson {
struct JsonToken;
}
namespace ThirdParty::Json::LitJson {
class Lexer;
}
// Forward declare root types
namespace ThirdParty::Json::LitJson {
class JsonReader;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::Json::LitJson::JsonReader);
// Type: ThirdParty.Json.LitJson::JsonReader
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ThirdParty::Json::LitJson {
// Is value type: false
// CS Name: ::ThirdParty.Json.LitJson::JsonReader*
class CORDL_TYPE JsonReader : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AllowComments, put = set_AllowComments)) bool AllowComments;

  __declspec(property(get = get_AllowSingleQuotedStrings, put = set_AllowSingleQuotedStrings)) bool AllowSingleQuotedStrings;

  __declspec(property(get = get_EndOfInput)) bool EndOfInput;

  __declspec(property(get = get_EndOfJson)) bool EndOfJson;

  __declspec(property(get = get_Token))::ThirdParty::Json::LitJson::JsonToken Token;

  __declspec(property(get = get_Value))::System::Object* Value;

  /// @brief Field current_input, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_current_input, put = __cordl_internal_set_current_input)) int32_t current_input;

  /// @brief Field current_symbol, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_current_symbol, put = __cordl_internal_set_current_symbol)) int32_t current_symbol;

  /// @brief Field depth, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_depth, put = __cordl_internal_set_depth))::System::Collections::Generic::Stack_1<::ThirdParty::Json::LitJson::JsonToken>* depth;

  /// @brief Field end_of_input, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_end_of_input, put = __cordl_internal_set_end_of_input)) bool end_of_input;

  /// @brief Field end_of_json, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_end_of_json, put = __cordl_internal_set_end_of_json)) bool end_of_json;

  /// @brief Field lexer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_lexer, put = __cordl_internal_set_lexer))::ThirdParty::Json::LitJson::Lexer* lexer;

  /// @brief Field parser_in_string, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_parser_in_string, put = __cordl_internal_set_parser_in_string)) bool parser_in_string;

  /// @brief Field parser_return, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_parser_return, put = __cordl_internal_set_parser_return)) bool parser_return;

  /// @brief Field read_started, offset 0x32, size 0x1
  __declspec(property(get = __cordl_internal_get_read_started, put = __cordl_internal_set_read_started)) bool read_started;

  /// @brief Field reader, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_reader, put = __cordl_internal_set_reader))::System::IO::TextReader* reader;

  /// @brief Field reader_is_owned, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_reader_is_owned, put = __cordl_internal_set_reader_is_owned)) bool reader_is_owned;

  /// @brief Field token, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_token, put = __cordl_internal_set_token))::ThirdParty::Json::LitJson::JsonToken token;

  /// @brief Field token_value, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_token_value, put = __cordl_internal_set_token_value))::System::Object* token_value;

  /// @brief Method Close, addr 0x14b0718, size 0x1c, virtual false, abstract: false, final false
  inline void Close();

  static inline ::ThirdParty::Json::LitJson::JsonReader* New_ctor(::StringW json_text);

  static inline ::ThirdParty::Json::LitJson::JsonReader* New_ctor(::System::IO::TextReader* reader);

  static inline ::ThirdParty::Json::LitJson::JsonReader* New_ctor(::System::IO::TextReader* reader, bool owned);

  /// @brief Method ProcessNumber, addr 0x14b00e8, size 0x288, virtual false, abstract: false, final false
  inline void ProcessNumber(::StringW number);

  /// @brief Method ProcessSymbol, addr 0x14b0370, size 0x18c, virtual false, abstract: false, final false
  inline void ProcessSymbol();

  /// @brief Method Read, addr 0x14ab3a4, size 0x3d0, virtual false, abstract: false, final false
  inline bool Read();

  /// @brief Method ReadToken, addr 0x14b04fc, size 0x68, virtual false, abstract: false, final false
  inline bool ReadToken();

  constexpr int32_t const& __cordl_internal_get_current_input() const;

  constexpr int32_t& __cordl_internal_get_current_input();

  constexpr int32_t const& __cordl_internal_get_current_symbol() const;

  constexpr int32_t& __cordl_internal_get_current_symbol();

  constexpr ::System::Collections::Generic::Stack_1<::ThirdParty::Json::LitJson::JsonToken>*& __cordl_internal_get_depth();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::ThirdParty::Json::LitJson::JsonToken>*> const& __cordl_internal_get_depth() const;

  constexpr bool const& __cordl_internal_get_end_of_input() const;

  constexpr bool& __cordl_internal_get_end_of_input();

  constexpr bool const& __cordl_internal_get_end_of_json() const;

  constexpr bool& __cordl_internal_get_end_of_json();

  constexpr ::ThirdParty::Json::LitJson::Lexer*& __cordl_internal_get_lexer();

  constexpr ::cordl_internals::to_const_pointer<::ThirdParty::Json::LitJson::Lexer*> const& __cordl_internal_get_lexer() const;

  constexpr bool const& __cordl_internal_get_parser_in_string() const;

  constexpr bool& __cordl_internal_get_parser_in_string();

  constexpr bool const& __cordl_internal_get_parser_return() const;

  constexpr bool& __cordl_internal_get_parser_return();

  constexpr bool const& __cordl_internal_get_read_started() const;

  constexpr bool& __cordl_internal_get_read_started();

  constexpr ::System::IO::TextReader*& __cordl_internal_get_reader();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::TextReader*> const& __cordl_internal_get_reader() const;

  constexpr bool const& __cordl_internal_get_reader_is_owned() const;

  constexpr bool& __cordl_internal_get_reader_is_owned();

  constexpr ::ThirdParty::Json::LitJson::JsonToken const& __cordl_internal_get_token() const;

  constexpr ::ThirdParty::Json::LitJson::JsonToken& __cordl_internal_get_token();

  constexpr ::System::Object*& __cordl_internal_get_token_value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_token_value() const;

  constexpr void __cordl_internal_set_current_input(int32_t value);

  constexpr void __cordl_internal_set_current_symbol(int32_t value);

  constexpr void __cordl_internal_set_depth(::System::Collections::Generic::Stack_1<::ThirdParty::Json::LitJson::JsonToken>* value);

  constexpr void __cordl_internal_set_end_of_input(bool value);

  constexpr void __cordl_internal_set_end_of_json(bool value);

  constexpr void __cordl_internal_set_lexer(::ThirdParty::Json::LitJson::Lexer* value);

  constexpr void __cordl_internal_set_parser_in_string(bool value);

  constexpr void __cordl_internal_set_parser_return(bool value);

  constexpr void __cordl_internal_set_read_started(bool value);

  constexpr void __cordl_internal_set_reader(::System::IO::TextReader* value);

  constexpr void __cordl_internal_set_reader_is_owned(bool value);

  constexpr void __cordl_internal_set_token(::ThirdParty::Json::LitJson::JsonToken value);

  constexpr void __cordl_internal_set_token_value(::System::Object* value);

  /// @brief Method .ctor, addr 0x14ae6b0, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::StringW json_text);

  /// @brief Method .ctor, addr 0x14ae4c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextReader* reader);

  /// @brief Method .ctor, addr 0x14afef4, size 0x128, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextReader* reader, bool owned);

  /// @brief Method get_AllowComments, addr 0x14afe5c, size 0x1c, virtual false, abstract: false, final false
  inline bool get_AllowComments();

  /// @brief Method get_AllowSingleQuotedStrings, addr 0x14afe98, size 0x1c, virtual false, abstract: false, final false
  inline bool get_AllowSingleQuotedStrings();

  /// @brief Method get_EndOfInput, addr 0x14afed4, size 0x8, virtual false, abstract: false, final false
  inline bool get_EndOfInput();

  /// @brief Method get_EndOfJson, addr 0x14afedc, size 0x8, virtual false, abstract: false, final false
  inline bool get_EndOfJson();

  /// @brief Method get_Token, addr 0x14afee4, size 0x8, virtual false, abstract: false, final false
  inline ::ThirdParty::Json::LitJson::JsonToken get_Token();

  /// @brief Method get_Value, addr 0x14afeec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Value();

  /// @brief Method set_AllowComments, addr 0x14afe78, size 0x20, virtual false, abstract: false, final false
  inline void set_AllowComments(bool value);

  /// @brief Method set_AllowSingleQuotedStrings, addr 0x14afeb4, size 0x20, virtual false, abstract: false, final false
  inline void set_AllowSingleQuotedStrings(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonReader(JsonReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonReader(JsonReader const&) = delete;

  /// @brief Field depth, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::ThirdParty::Json::LitJson::JsonToken>* ___depth;

  /// @brief Field current_input, offset: 0x18, size: 0x4, def value: None
  int32_t ___current_input;

  /// @brief Field current_symbol, offset: 0x1c, size: 0x4, def value: None
  int32_t ___current_symbol;

  /// @brief Field end_of_json, offset: 0x20, size: 0x1, def value: None
  bool ___end_of_json;

  /// @brief Field end_of_input, offset: 0x21, size: 0x1, def value: None
  bool ___end_of_input;

  /// @brief Field lexer, offset: 0x28, size: 0x8, def value: None
  ::ThirdParty::Json::LitJson::Lexer* ___lexer;

  /// @brief Field parser_in_string, offset: 0x30, size: 0x1, def value: None
  bool ___parser_in_string;

  /// @brief Field parser_return, offset: 0x31, size: 0x1, def value: None
  bool ___parser_return;

  /// @brief Field read_started, offset: 0x32, size: 0x1, def value: None
  bool ___read_started;

  /// @brief Field reader, offset: 0x38, size: 0x8, def value: None
  ::System::IO::TextReader* ___reader;

  /// @brief Field reader_is_owned, offset: 0x40, size: 0x1, def value: None
  bool ___reader_is_owned;

  /// @brief Field token_value, offset: 0x48, size: 0x8, def value: None
  ::System::Object* ___token_value;

  /// @brief Field token, offset: 0x50, size: 0x4, def value: None
  ::ThirdParty::Json::LitJson::JsonToken ___token;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::Json::LitJson::JsonReader, 0x58>, "Size mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonReader, ___depth) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonReader, ___current_input) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonReader, ___current_symbol) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonReader, ___end_of_json) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonReader, ___end_of_input) == 0x21, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonReader, ___lexer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonReader, ___parser_in_string) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonReader, ___parser_return) == 0x31, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonReader, ___read_started) == 0x32, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonReader, ___reader) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonReader, ___reader_is_owned) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonReader, ___token_value) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonReader, ___token) == 0x50, "Offset mismatch!");

} // namespace ThirdParty::Json::LitJson
NEED_NO_BOX(::ThirdParty::Json::LitJson::JsonReader);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::Json::LitJson::JsonReader*, "ThirdParty.Json.LitJson", "JsonReader");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Lexer)
namespace System::IO {
class TextReader;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace ThirdParty::Json::LitJson {
class FsmContext;
}
namespace ThirdParty::Json::LitJson {
class __Lexer__StateHandler;
}
// Forward declare root types
namespace ThirdParty::Json::LitJson {
class Lexer;
}
namespace ThirdParty::Json::LitJson {
class __Lexer__StateHandler;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::Json::LitJson::Lexer);
MARK_REF_PTR_T(::ThirdParty::Json::LitJson::__Lexer__StateHandler);
// Type: ::StateHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ThirdParty::Json::LitJson {
// Is value type: false
// CS Name: ::Lexer::StateHandler*
class CORDL_TYPE __Lexer__StateHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x14b31b0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ThirdParty::Json::LitJson::FsmContext* ctx, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x14b31d0, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x14b319c, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::ThirdParty::Json::LitJson::FsmContext* ctx);

  static inline ::ThirdParty::Json::LitJson::__Lexer__StateHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x14b1cbc, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Lexer__StateHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Lexer__StateHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Lexer__StateHandler(__Lexer__StateHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Lexer__StateHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Lexer__StateHandler(__Lexer__StateHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::Json::LitJson::__Lexer__StateHandler, 0x80>, "Size mismatch!");

} // namespace ThirdParty::Json::LitJson
// Type: ThirdParty.Json.LitJson::Lexer
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ThirdParty::Json::LitJson {
// Is value type: false
// CS Name: ::ThirdParty.Json.LitJson::Lexer*
class CORDL_TYPE Lexer : public ::System::Object {
public:
  // Declarations
  using StateHandler = ::ThirdParty::Json::LitJson::__Lexer__StateHandler;

  __declspec(property(get = get_AllowComments, put = set_AllowComments)) bool AllowComments;

  __declspec(property(get = get_AllowSingleQuotedStrings, put = set_AllowSingleQuotedStrings)) bool AllowSingleQuotedStrings;

  __declspec(property(get = get_EndOfInput)) bool EndOfInput;

  __declspec(property(get = get_StringValue))::StringW StringValue;

  __declspec(property(get = get_Token)) int32_t Token;

  /// @brief Field allow_comments, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_allow_comments, put = __cordl_internal_set_allow_comments)) bool allow_comments;

  /// @brief Field allow_single_quoted_strings, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_allow_single_quoted_strings, put = __cordl_internal_set_allow_single_quoted_strings)) bool allow_single_quoted_strings;

  /// @brief Field end_of_input, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_end_of_input, put = __cordl_internal_set_end_of_input)) bool end_of_input;

  /// @brief Field fsm_context, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_fsm_context, put = __cordl_internal_set_fsm_context))::ThirdParty::Json::LitJson::FsmContext* fsm_context;

  /// @brief Field fsm_handler_table, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_fsm_handler_table,
               put = setStaticF_fsm_handler_table))::ArrayW<::ThirdParty::Json::LitJson::__Lexer__StateHandler*, ::Array<::ThirdParty::Json::LitJson::__Lexer__StateHandler*>*> fsm_handler_table;

  /// @brief Field fsm_return_table, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_fsm_return_table, put = setStaticF_fsm_return_table))::ArrayW<int32_t, ::Array<int32_t>*> fsm_return_table;

  /// @brief Field input_buffer, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_input_buffer, put = __cordl_internal_set_input_buffer)) int32_t input_buffer;

  /// @brief Field input_char, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_input_char, put = __cordl_internal_set_input_char)) int32_t input_char;

  /// @brief Field reader, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_reader, put = __cordl_internal_set_reader))::System::IO::TextReader* reader;

  /// @brief Field state, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state)) int32_t state;

  /// @brief Field string_buffer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_string_buffer, put = __cordl_internal_set_string_buffer))::System::Text::StringBuilder* string_buffer;

  /// @brief Field string_value, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_string_value, put = __cordl_internal_set_string_value))::StringW string_value;

  /// @brief Field token, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_token, put = __cordl_internal_set_token)) int32_t token;

  /// @brief Field unichar, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_unichar, put = __cordl_internal_set_unichar)) int32_t unichar;

  /// @brief Method GetChar, addr 0x14b20b0, size 0x2c, virtual false, abstract: false, final false
  inline bool GetChar();

  /// @brief Method HexValue, addr 0x14b1c38, size 0x84, virtual false, abstract: false, final false
  static inline int32_t HexValue(int32_t digit);

  static inline ::ThirdParty::Json::LitJson::Lexer* New_ctor(::System::IO::TextReader* reader);

  /// @brief Method NextChar, addr 0x14b3164, size 0x38, virtual false, abstract: false, final false
  inline int32_t NextChar();

  /// @brief Method NextToken, addr 0x14b0564, size 0x1b4, virtual false, abstract: false, final false
  inline bool NextToken();

  /// @brief Method PopulateFsmTables, addr 0x14b1204, size 0xa34, virtual false, abstract: false, final false
  static inline void PopulateFsmTables();

  /// @brief Method ProcessEscChar, addr 0x14b1de8, size 0xf0, virtual false, abstract: false, final false
  static inline char16_t ProcessEscChar(int32_t esc_char);

  /// @brief Method State1, addr 0x14b1ed8, size 0x1d8, virtual false, abstract: false, final false
  static inline bool State1(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method State10, addr 0x14b26f0, size 0x6c, virtual false, abstract: false, final false
  static inline bool State10(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method State11, addr 0x14b275c, size 0x6c, virtual false, abstract: false, final false
  static inline bool State11(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method State12, addr 0x14b27c8, size 0x6c, virtual false, abstract: false, final false
  static inline bool State12(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method State13, addr 0x14b2834, size 0x6c, virtual false, abstract: false, final false
  static inline bool State13(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method State14, addr 0x14b28a0, size 0x6c, virtual false, abstract: false, final false
  static inline bool State14(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method State15, addr 0x14b290c, size 0x6c, virtual false, abstract: false, final false
  static inline bool State15(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method State16, addr 0x14b2978, size 0x6c, virtual false, abstract: false, final false
  static inline bool State16(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method State17, addr 0x14b29e4, size 0x6c, virtual false, abstract: false, final false
  static inline bool State17(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method State18, addr 0x14b2a50, size 0x6c, virtual false, abstract: false, final false
  static inline bool State18(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method State19, addr 0x14b2abc, size 0xa8, virtual false, abstract: false, final false
  static inline bool State19(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method State2, addr 0x14b20dc, size 0xa4, virtual false, abstract: false, final false
  static inline bool State2(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method State20, addr 0x14b2b64, size 0x6c, virtual false, abstract: false, final false
  static inline bool State20(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method State21, addr 0x14b2bd0, size 0x138, virtual false, abstract: false, final false
  static inline bool State21(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method State22, addr 0x14b2d08, size 0x17c, virtual false, abstract: false, final false
  static inline bool State22(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method State23, addr 0x14b2e84, size 0xa8, virtual false, abstract: false, final false
  static inline bool State23(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method State24, addr 0x14b2f2c, size 0x74, virtual false, abstract: false, final false
  static inline bool State24(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method State25, addr 0x14b2fa0, size 0x7c, virtual false, abstract: false, final false
  static inline bool State25(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method State26, addr 0x14b301c, size 0x68, virtual false, abstract: false, final false
  static inline bool State26(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method State27, addr 0x14b3084, size 0x68, virtual false, abstract: false, final false
  static inline bool State27(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method State28, addr 0x14b30ec, size 0x78, virtual false, abstract: false, final false
  static inline bool State28(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method State3, addr 0x14b2180, size 0x130, virtual false, abstract: false, final false
  static inline bool State3(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method State4, addr 0x14b22bc, size 0xfc, virtual false, abstract: false, final false
  static inline bool State4(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method State5, addr 0x14b23b8, size 0x80, virtual false, abstract: false, final false
  static inline bool State5(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method State6, addr 0x14b2438, size 0xfc, virtual false, abstract: false, final false
  static inline bool State6(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method State7, addr 0x14b2534, size 0x94, virtual false, abstract: false, final false
  static inline bool State7(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method State8, addr 0x14b25c8, size 0xbc, virtual false, abstract: false, final false
  static inline bool State8(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method State9, addr 0x14b2684, size 0x6c, virtual false, abstract: false, final false
  static inline bool State9(::ThirdParty::Json::LitJson::FsmContext* ctx);

  /// @brief Method UngetChar, addr 0x14b22b0, size 0xc, virtual false, abstract: false, final false
  inline void UngetChar();

  constexpr bool const& __cordl_internal_get_allow_comments() const;

  constexpr bool& __cordl_internal_get_allow_comments();

  constexpr bool const& __cordl_internal_get_allow_single_quoted_strings() const;

  constexpr bool& __cordl_internal_get_allow_single_quoted_strings();

  constexpr bool const& __cordl_internal_get_end_of_input() const;

  constexpr bool& __cordl_internal_get_end_of_input();

  constexpr ::ThirdParty::Json::LitJson::FsmContext*& __cordl_internal_get_fsm_context();

  constexpr ::cordl_internals::to_const_pointer<::ThirdParty::Json::LitJson::FsmContext*> const& __cordl_internal_get_fsm_context() const;

  constexpr int32_t const& __cordl_internal_get_input_buffer() const;

  constexpr int32_t& __cordl_internal_get_input_buffer();

  constexpr int32_t const& __cordl_internal_get_input_char() const;

  constexpr int32_t& __cordl_internal_get_input_char();

  constexpr ::System::IO::TextReader*& __cordl_internal_get_reader();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::TextReader*> const& __cordl_internal_get_reader() const;

  constexpr int32_t const& __cordl_internal_get_state() const;

  constexpr int32_t& __cordl_internal_get_state();

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_string_buffer();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get_string_buffer() const;

  constexpr ::StringW const& __cordl_internal_get_string_value() const;

  constexpr ::StringW& __cordl_internal_get_string_value();

  constexpr int32_t const& __cordl_internal_get_token() const;

  constexpr int32_t& __cordl_internal_get_token();

  constexpr int32_t const& __cordl_internal_get_unichar() const;

  constexpr int32_t& __cordl_internal_get_unichar();

  constexpr void __cordl_internal_set_allow_comments(bool value);

  constexpr void __cordl_internal_set_allow_single_quoted_strings(bool value);

  constexpr void __cordl_internal_set_end_of_input(bool value);

  constexpr void __cordl_internal_set_fsm_context(::ThirdParty::Json::LitJson::FsmContext* value);

  constexpr void __cordl_internal_set_input_buffer(int32_t value);

  constexpr void __cordl_internal_set_input_char(int32_t value);

  constexpr void __cordl_internal_set_reader(::System::IO::TextReader* value);

  constexpr void __cordl_internal_set_state(int32_t value);

  constexpr void __cordl_internal_set_string_buffer(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set_string_value(::StringW value);

  constexpr void __cordl_internal_set_token(int32_t value);

  constexpr void __cordl_internal_set_unichar(int32_t value);

  /// @brief Method .ctor, addr 0x14b001c, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextReader* reader);

  static inline ::ArrayW<::ThirdParty::Json::LitJson::__Lexer__StateHandler*, ::Array<::ThirdParty::Json::LitJson::__Lexer__StateHandler*>*> getStaticF_fsm_handler_table();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_fsm_return_table();

  /// @brief Method get_AllowComments, addr 0x14b11c0, size 0x8, virtual false, abstract: false, final false
  inline bool get_AllowComments();

  /// @brief Method get_AllowSingleQuotedStrings, addr 0x14b11d4, size 0x8, virtual false, abstract: false, final false
  inline bool get_AllowSingleQuotedStrings();

  /// @brief Method get_EndOfInput, addr 0x14b11e8, size 0x8, virtual false, abstract: false, final false
  inline bool get_EndOfInput();

  /// @brief Method get_StringValue, addr 0x14b11f8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_StringValue();

  /// @brief Method get_Token, addr 0x14b11f0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Token();

  static inline void setStaticF_fsm_handler_table(::ArrayW<::ThirdParty::Json::LitJson::__Lexer__StateHandler*, ::Array<::ThirdParty::Json::LitJson::__Lexer__StateHandler*>*> value);

  static inline void setStaticF_fsm_return_table(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method set_AllowComments, addr 0x14b11c8, size 0xc, virtual false, abstract: false, final false
  inline void set_AllowComments(bool value);

  /// @brief Method set_AllowSingleQuotedStrings, addr 0x14b11dc, size 0xc, virtual false, abstract: false, final false
  inline void set_AllowSingleQuotedStrings(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Lexer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Lexer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Lexer(Lexer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Lexer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Lexer(Lexer const&) = delete;

  /// @brief Field allow_comments, offset: 0x10, size: 0x1, def value: None
  bool ___allow_comments;

  /// @brief Field allow_single_quoted_strings, offset: 0x11, size: 0x1, def value: None
  bool ___allow_single_quoted_strings;

  /// @brief Field end_of_input, offset: 0x12, size: 0x1, def value: None
  bool ___end_of_input;

  /// @brief Field fsm_context, offset: 0x18, size: 0x8, def value: None
  ::ThirdParty::Json::LitJson::FsmContext* ___fsm_context;

  /// @brief Field input_buffer, offset: 0x20, size: 0x4, def value: None
  int32_t ___input_buffer;

  /// @brief Field input_char, offset: 0x24, size: 0x4, def value: None
  int32_t ___input_char;

  /// @brief Field reader, offset: 0x28, size: 0x8, def value: None
  ::System::IO::TextReader* ___reader;

  /// @brief Field state, offset: 0x30, size: 0x4, def value: None
  int32_t ___state;

  /// @brief Field string_buffer, offset: 0x38, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___string_buffer;

  /// @brief Field string_value, offset: 0x40, size: 0x8, def value: None
  ::StringW ___string_value;

  /// @brief Field token, offset: 0x48, size: 0x4, def value: None
  int32_t ___token;

  /// @brief Field unichar, offset: 0x4c, size: 0x4, def value: None
  int32_t ___unichar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::Json::LitJson::Lexer, 0x50>, "Size mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::Lexer, ___allow_comments) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::Lexer, ___allow_single_quoted_strings) == 0x11, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::Lexer, ___end_of_input) == 0x12, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::Lexer, ___fsm_context) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::Lexer, ___input_buffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::Lexer, ___input_char) == 0x24, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::Lexer, ___reader) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::Lexer, ___state) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::Lexer, ___string_buffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::Lexer, ___string_value) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::Lexer, ___token) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::Lexer, ___unichar) == 0x4c, "Offset mismatch!");

} // namespace ThirdParty::Json::LitJson
NEED_NO_BOX(::ThirdParty::Json::LitJson::Lexer);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::Json::LitJson::Lexer*, "ThirdParty.Json.LitJson", "Lexer");
NEED_NO_BOX(::ThirdParty::Json::LitJson::__Lexer__StateHandler);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::Json::LitJson::__Lexer__StateHandler*, "ThirdParty.Json.LitJson", "Lexer/StateHandler");

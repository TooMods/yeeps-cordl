#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonWriter)
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System::IO {
class TextWriter;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace ThirdParty::Json::LitJson {
struct Condition;
}
namespace ThirdParty::Json::LitJson {
class WriterContext;
}
// Forward declare root types
namespace ThirdParty::Json::LitJson {
class JsonWriter;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::Json::LitJson::JsonWriter);
// Type: ThirdParty.Json.LitJson::JsonWriter
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ThirdParty::Json::LitJson {
// Is value type: false
// CS Name: ::ThirdParty.Json.LitJson::JsonWriter*
class CORDL_TYPE JsonWriter : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IndentValue, put = set_IndentValue)) int32_t IndentValue;

  __declspec(property(get = get_PrettyPrint, put = set_PrettyPrint)) bool PrettyPrint;

  __declspec(property(get = get_TextWriter))::System::IO::TextWriter* TextWriter;

  __declspec(property(get = get_Validate, put = set_Validate)) bool Validate;

  /// @brief Field context, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context))::ThirdParty::Json::LitJson::WriterContext* context;

  /// @brief Field ctx_stack, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ctx_stack, put = __cordl_internal_set_ctx_stack))::System::Collections::Generic::Stack_1<::ThirdParty::Json::LitJson::WriterContext*>* ctx_stack;

  /// @brief Field has_reached_end, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_has_reached_end, put = __cordl_internal_set_has_reached_end)) bool has_reached_end;

  /// @brief Field hex_seq, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_hex_seq, put = __cordl_internal_set_hex_seq))::ArrayW<char16_t, ::Array<char16_t>*> hex_seq;

  /// @brief Field indent_value, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_indent_value, put = __cordl_internal_set_indent_value)) int32_t indent_value;

  /// @brief Field indentation, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_indentation, put = __cordl_internal_set_indentation)) int32_t indentation;

  /// @brief Field inst_string_builder, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_inst_string_builder, put = __cordl_internal_set_inst_string_builder))::System::Text::StringBuilder* inst_string_builder;

  /// @brief Field number_format, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_number_format, put = setStaticF_number_format))::System::Globalization::NumberFormatInfo* number_format;

  /// @brief Field pretty_print, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_pretty_print, put = __cordl_internal_set_pretty_print)) bool pretty_print;

  /// @brief Field validate, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get_validate, put = __cordl_internal_set_validate)) bool validate;

  /// @brief Field writer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_writer, put = __cordl_internal_set_writer))::System::IO::TextWriter* writer;

  /// @brief Method DoValidation, addr 0x14b0958, size 0x19c, virtual false, abstract: false, final false
  inline void DoValidation(::ThirdParty::Json::LitJson::Condition cond);

  /// @brief Method Indent, addr 0x14b0b6c, size 0x18, virtual false, abstract: false, final false
  inline void Indent();

  /// @brief Method Init, addr 0x14b07d8, size 0x10c, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method IntToHex, addr 0x14b0af4, size 0x78, virtual false, abstract: false, final false
  static inline void IntToHex(int32_t n, ::ArrayW<char16_t, ::Array<char16_t>*> hex);

  static inline ::ThirdParty::Json::LitJson::JsonWriter* New_ctor();

  static inline ::ThirdParty::Json::LitJson::JsonWriter* New_ctor(::System::Text::StringBuilder* sb);

  static inline ::ThirdParty::Json::LitJson::JsonWriter* New_ctor(::System::IO::TextWriter* writer);

  /// @brief Method Put, addr 0x14b0b84, size 0x8c, virtual false, abstract: false, final false
  inline void Put(::StringW str);

  /// @brief Method PutNewline, addr 0x14b0c10, size 0x8, virtual false, abstract: false, final false
  inline void PutNewline();

  /// @brief Method PutNewline, addr 0x14b0c18, size 0xc0, virtual false, abstract: false, final false
  inline void PutNewline(bool add_comma);

  /// @brief Method PutString, addr 0x14b0cd8, size 0x2f8, virtual false, abstract: false, final false
  inline void PutString(::StringW str);

  /// @brief Method Reset, addr 0x14ae050, size 0xe0, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method ToString, addr 0x14b0fe8, size 0x68, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Unindent, addr 0x14b0fd0, size 0x18, virtual false, abstract: false, final false
  inline void Unindent();

  /// @brief Method Write, addr 0x14a3ad4, size 0x98, virtual false, abstract: false, final false
  inline void Write(bool boolean);

  /// @brief Method Write, addr 0x14b10d8, size 0xe0, virtual false, abstract: false, final false
  inline void Write(::System::DateTime date);

  /// @brief Method Write, addr 0x14aec04, size 0xdc, virtual false, abstract: false, final false
  inline void Write(::System::Decimal number);

  /// @brief Method Write, addr 0x14a3b6c, size 0x128, virtual false, abstract: false, final false
  inline void Write(double_t number);

  /// @brief Method Write, addr 0x14a3c94, size 0xd4, virtual false, abstract: false, final false
  inline void Write(int32_t number);

  /// @brief Method Write, addr 0x14a3e3c, size 0xd4, virtual false, abstract: false, final false
  inline void Write(int64_t number);

  /// @brief Method Write, addr 0x14a3d68, size 0xd4, virtual false, abstract: false, final false
  inline void Write(uint32_t number);

  /// @brief Method Write, addr 0x14a3f10, size 0xd4, virtual false, abstract: false, final false
  inline void Write(uint64_t number);

  /// @brief Method Write, addr 0x14a3a48, size 0x8c, virtual false, abstract: false, final false
  inline void Write(::StringW str);

  /// @brief Method WriteArrayEnd, addr 0x14a40c8, size 0xec, virtual false, abstract: false, final false
  inline void WriteArrayEnd();

  /// @brief Method WriteArrayStart, addr 0x14a3fe4, size 0xe4, virtual false, abstract: false, final false
  inline void WriteArrayStart();

  /// @brief Method WriteObjectEnd, addr 0x14a43a8, size 0xec, virtual false, abstract: false, final false
  inline void WriteObjectEnd();

  /// @brief Method WriteObjectStart, addr 0x14a41b4, size 0xe4, virtual false, abstract: false, final false
  inline void WriteObjectStart();

  /// @brief Method WritePropertyName, addr 0x14a4298, size 0x110, virtual false, abstract: false, final false
  inline void WritePropertyName(::StringW property_name);

  /// @brief Method WriteRaw, addr 0x14b1050, size 0x88, virtual false, abstract: false, final false
  inline void WriteRaw(::StringW str);

  constexpr ::ThirdParty::Json::LitJson::WriterContext*& __cordl_internal_get_context();

  constexpr ::cordl_internals::to_const_pointer<::ThirdParty::Json::LitJson::WriterContext*> const& __cordl_internal_get_context() const;

  constexpr ::System::Collections::Generic::Stack_1<::ThirdParty::Json::LitJson::WriterContext*>*& __cordl_internal_get_ctx_stack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::ThirdParty::Json::LitJson::WriterContext*>*> const& __cordl_internal_get_ctx_stack() const;

  constexpr bool const& __cordl_internal_get_has_reached_end() const;

  constexpr bool& __cordl_internal_get_has_reached_end();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_hex_seq() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_hex_seq();

  constexpr int32_t const& __cordl_internal_get_indent_value() const;

  constexpr int32_t& __cordl_internal_get_indent_value();

  constexpr int32_t const& __cordl_internal_get_indentation() const;

  constexpr int32_t& __cordl_internal_get_indentation();

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_inst_string_builder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get_inst_string_builder() const;

  constexpr bool const& __cordl_internal_get_pretty_print() const;

  constexpr bool& __cordl_internal_get_pretty_print();

  constexpr bool const& __cordl_internal_get_validate() const;

  constexpr bool& __cordl_internal_get_validate();

  constexpr ::System::IO::TextWriter*& __cordl_internal_get_writer();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::TextWriter*> const& __cordl_internal_get_writer() const;

  constexpr void __cordl_internal_set_context(::ThirdParty::Json::LitJson::WriterContext* value);

  constexpr void __cordl_internal_set_ctx_stack(::System::Collections::Generic::Stack_1<::ThirdParty::Json::LitJson::WriterContext*>* value);

  constexpr void __cordl_internal_set_has_reached_end(bool value);

  constexpr void __cordl_internal_set_hex_seq(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_indent_value(int32_t value);

  constexpr void __cordl_internal_set_indentation(int32_t value);

  constexpr void __cordl_internal_set_inst_string_builder(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set_pretty_print(bool value);

  constexpr void __cordl_internal_set_validate(bool value);

  constexpr void __cordl_internal_set_writer(::System::IO::TextWriter* value);

  /// @brief Method .ctor, addr 0x14a5ce4, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x14b08e4, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::StringBuilder* sb);

  /// @brief Method .ctor, addr 0x14a4854, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextWriter* writer);

  static inline ::System::Globalization::NumberFormatInfo* getStaticF_number_format();

  /// @brief Method get_IndentValue, addr 0x14b073c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_IndentValue();

  /// @brief Method get_PrettyPrint, addr 0x14b0758, size 0x8, virtual false, abstract: false, final false
  inline bool get_PrettyPrint();

  /// @brief Method get_TextWriter, addr 0x14b076c, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::TextWriter* get_TextWriter();

  /// @brief Method get_Validate, addr 0x14b0774, size 0x8, virtual false, abstract: false, final false
  inline bool get_Validate();

  static inline void setStaticF_number_format(::System::Globalization::NumberFormatInfo* value);

  /// @brief Method set_IndentValue, addr 0x14b0744, size 0x14, virtual false, abstract: false, final false
  inline void set_IndentValue(int32_t value);

  /// @brief Method set_PrettyPrint, addr 0x14b0760, size 0xc, virtual false, abstract: false, final false
  inline void set_PrettyPrint(bool value);

  /// @brief Method set_Validate, addr 0x14b077c, size 0xc, virtual false, abstract: false, final false
  inline void set_Validate(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonWriter(JsonWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonWriter(JsonWriter const&) = delete;

  /// @brief Field context, offset: 0x10, size: 0x8, def value: None
  ::ThirdParty::Json::LitJson::WriterContext* ___context;

  /// @brief Field ctx_stack, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::ThirdParty::Json::LitJson::WriterContext*>* ___ctx_stack;

  /// @brief Field has_reached_end, offset: 0x20, size: 0x1, def value: None
  bool ___has_reached_end;

  /// @brief Field hex_seq, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___hex_seq;

  /// @brief Field indentation, offset: 0x30, size: 0x4, def value: None
  int32_t ___indentation;

  /// @brief Field indent_value, offset: 0x34, size: 0x4, def value: None
  int32_t ___indent_value;

  /// @brief Field inst_string_builder, offset: 0x38, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___inst_string_builder;

  /// @brief Field pretty_print, offset: 0x40, size: 0x1, def value: None
  bool ___pretty_print;

  /// @brief Field validate, offset: 0x41, size: 0x1, def value: None
  bool ___validate;

  /// @brief Field writer, offset: 0x48, size: 0x8, def value: None
  ::System::IO::TextWriter* ___writer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::Json::LitJson::JsonWriter, 0x50>, "Size mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonWriter, ___context) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonWriter, ___ctx_stack) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonWriter, ___has_reached_end) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonWriter, ___hex_seq) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonWriter, ___indentation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonWriter, ___indent_value) == 0x34, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonWriter, ___inst_string_builder) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonWriter, ___pretty_print) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonWriter, ___validate) == 0x41, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Json::LitJson::JsonWriter, ___writer) == 0x48, "Offset mismatch!");

} // namespace ThirdParty::Json::LitJson
NEED_NO_BOX(::ThirdParty::Json::LitJson::JsonWriter);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::Json::LitJson::JsonWriter*, "ThirdParty.Json.LitJson", "JsonWriter");

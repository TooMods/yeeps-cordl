#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NameValueHeaderValue)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net::Http::Headers {
class Lexer;
}
namespace System::Net::Http::Headers {
struct Token;
}
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class NameValueHeaderValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::NameValueHeaderValue);
// Type: System.Net.Http.Headers::NameValueHeaderValue
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: ::System.Net.Http.Headers::NameValueHeaderValue*
class CORDL_TYPE NameValueHeaderValue : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField))::StringW _Name_k__BackingField;

  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value))::StringW value;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Create, addr 0x16211e8, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Net::Http::Headers::NameValueHeaderValue* Create(::StringW name, ::StringW value);

  /// @brief Method Equals, addr 0x1628ce8, size 0xe0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x1628c6c, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Net::Http::Headers::NameValueHeaderValue* New_ctor();

  static inline ::System::Net::Http::Headers::NameValueHeaderValue* New_ctor(::StringW name);

  static inline ::System::Net::Http::Headers::NameValueHeaderValue* New_ctor(::StringW name, ::StringW value);

  static inline ::System::Net::Http::Headers::NameValueHeaderValue* New_ctor(::System::Net::Http::Headers::NameValueHeaderValue* source);

  /// @brief Method System.ICloneable.Clone, addr 0x1628c0c, size 0x60, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method ToString, addr 0x1628e78, size 0x74, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryParseElement, addr 0x1628eec, size 0x188, virtual false, abstract: false, final false
  static inline bool TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ByRef<::System::Net::Http::Headers::NameValueHeaderValue*> parsedValue, ByRef<::System::Net::Http::Headers::Token> t);

  /// @brief Method TryParseParameters, addr 0x16224c0, size 0x2c0, virtual false, abstract: false, final false
  static inline bool TryParseParameters(::System::Net::Http::Headers::Lexer* lexer, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*> result,
                                        ByRef<::System::Net::Http::Headers::Token> t);

  /// @brief Method TryParsePragma, addr 0x1628dc8, size 0xb0, virtual false, abstract: false, final false
  static inline bool TryParsePragma(::StringW input, int32_t minimalCount, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*> result);

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get_value() const;

  constexpr ::StringW& __cordl_internal_get_value();

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_value(::StringW value);

  /// @brief Method .ctor, addr 0x1628bec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1628be4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method .ctor, addr 0x1621c68, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW value);

  /// @brief Method .ctor, addr 0x1622120, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::Headers::NameValueHeaderValue* source);

  /// @brief Method get_Name, addr 0x1628bf4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Value, addr 0x1628c04, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method set_Name, addr 0x1628bfc, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_Value, addr 0x1621b0c, size 0x15c, virtual false, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NameValueHeaderValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NameValueHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NameValueHeaderValue(NameValueHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NameValueHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NameValueHeaderValue(NameValueHeaderValue const&) = delete;

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::StringW ___value;

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::NameValueHeaderValue, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::NameValueHeaderValue, ___value) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::NameValueHeaderValue, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::NameValueHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::NameValueHeaderValue*, "System.Net.Http.Headers", "NameValueHeaderValue");

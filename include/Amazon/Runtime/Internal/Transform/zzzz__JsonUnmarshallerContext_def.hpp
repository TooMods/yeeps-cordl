#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Transform/zzzz__JsonUnmarshallerContext_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__UnmarshallerContext_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "ThirdParty/Json/LitJson/zzzz__JsonToken_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonUnmarshallerContext)
namespace Amazon::Runtime::Internal::Transform {
class IWebResponseData;
}
namespace Amazon::Runtime::Internal::Transform {
class __JsonUnmarshallerContext__JsonPathStack;
}
namespace Amazon::Runtime::Internal::Transform {
struct __JsonUnmarshallerContext__PathSegmentType;
}
namespace Amazon::Runtime::Internal::Transform {
struct __JsonUnmarshallerContext__PathSegment;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System::IO {
class StreamReader;
}
namespace System::IO {
class Stream;
}
namespace System::Text {
class StringBuilder;
}
namespace ThirdParty::Json::LitJson {
class JsonReader;
}
namespace ThirdParty::Json::LitJson {
struct JsonToken;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Transform {
struct __JsonUnmarshallerContext__PathSegmentType;
}
namespace Amazon::Runtime::Internal::Transform {
class JsonUnmarshallerContext;
}
namespace Amazon::Runtime::Internal::Transform {
class __JsonUnmarshallerContext__JsonPathStack;
}
namespace Amazon::Runtime::Internal::Transform {
struct __JsonUnmarshallerContext__PathSegment;
}
// Write type traits
MARK_VAL_T(::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack);
MARK_VAL_T(::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment);
// Type: ::PathSegmentType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// Is value type: true
// CS Name: ::JsonUnmarshallerContext::PathSegmentType
struct CORDL_TYPE __JsonUnmarshallerContext__PathSegmentType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____JsonUnmarshallerContext__PathSegmentType_Unwrapped
  enum struct ____JsonUnmarshallerContext__PathSegmentType_Unwrapped : int32_t {
    __E_Value = static_cast<int32_t>(0x0),
    __E_Delimiter = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____JsonUnmarshallerContext__PathSegmentType_Unwrapped() const noexcept {
    return static_cast<____JsonUnmarshallerContext__PathSegmentType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonUnmarshallerContext__PathSegmentType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __JsonUnmarshallerContext__PathSegmentType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Delimiter value: static_cast<int32_t>(0x1)
  static ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType const Delimiter;

  /// @brief Field Value value: static_cast<int32_t>(0x0)
  static ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType const Value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Transform
// Type: ::PathSegment
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// Is value type: true
// CS Name: ::JsonUnmarshallerContext::PathSegment
struct CORDL_TYPE __JsonUnmarshallerContext__PathSegment {
public:
  // Declarations
  __declspec(property(get = get_SegmentType, put = set_SegmentType))::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType SegmentType;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  /// @brief Method get_SegmentType, addr 0x244b310, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType get_SegmentType();

  /// @brief Method get_Value, addr 0x244b320, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_SegmentType, addr 0x244b318, size 0x8, virtual false, abstract: false, final false
  inline void set_SegmentType(::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType value);

  /// @brief Method set_Value, addr 0x244b328, size 0x8, virtual false, abstract: false, final false
  inline void set_Value(::StringW value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonUnmarshallerContext__PathSegment();

  // Ctor Parameters [CppParam { name: "_SegmentType_k__BackingField", ty: "::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType", modifiers: "", def_value: None },
  // CppParam { name: "_Value_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __JsonUnmarshallerContext__PathSegment(::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType _SegmentType_k__BackingField,
                                                   ::StringW _Value_k__BackingField) noexcept;

  /// @brief Field <SegmentType>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType _SegmentType_k__BackingField;

  /// @brief Field <Value>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::StringW _Value_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment, 0x10>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment, _SegmentType_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment, _Value_k__BackingField) == 0x8, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Transform
// Type: ::JsonPathStack
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// Is value type: false
// CS Name: ::JsonUnmarshallerContext::JsonPathStack*
class CORDL_TYPE __JsonUnmarshallerContext__JsonPathStack : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_CurrentDepth)) int32_t CurrentDepth;

  __declspec(property(get = get_CurrentPath))::StringW CurrentPath;

  /// @brief Field currentDepth, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_currentDepth, put = __cordl_internal_set_currentDepth)) int32_t currentDepth;

  /// @brief Field stack, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_stack,
                      put = __cordl_internal_set_stack))::System::Collections::Generic::Stack_1<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment>* stack;

  /// @brief Field stackString, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_stackString, put = __cordl_internal_set_stackString))::StringW stackString;

  /// @brief Field stackStringBuilder, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_stackStringBuilder, put = __cordl_internal_set_stackStringBuilder))::System::Text::StringBuilder* stackStringBuilder;

  static inline ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack* New_ctor();

  /// @brief Method Peek, addr 0x244b130, size 0x50, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment Peek();

  /// @brief Method Pop, addr 0x244b180, size 0xb0, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment Pop();

  /// @brief Method Push, addr 0x244b09c, size 0x94, virtual false, abstract: false, final false
  inline void Push(::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment segment);

  constexpr int32_t const& __cordl_internal_get_currentDepth() const;

  constexpr int32_t& __cordl_internal_get_currentDepth();

  constexpr ::System::Collections::Generic::Stack_1<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment>*& __cordl_internal_get_stack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment>*> const&
  __cordl_internal_get_stack() const;

  constexpr ::StringW const& __cordl_internal_get_stackString() const;

  constexpr ::StringW& __cordl_internal_get_stackString();

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_stackStringBuilder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get_stackStringBuilder() const;

  constexpr void __cordl_internal_set_currentDepth(int32_t value);

  constexpr void __cordl_internal_set_stack(::System::Collections::Generic::Stack_1<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment>* value);

  constexpr void __cordl_internal_set_stackString(::StringW value);

  constexpr void __cordl_internal_set_stackStringBuilder(::System::Text::StringBuilder* value);

  /// @brief Method .ctor, addr 0x244a74c, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x244b230, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_CurrentDepth, addr 0x244b330, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_CurrentDepth();

  /// @brief Method get_CurrentPath, addr 0x244aa20, size 0x34, virtual false, abstract: false, final false
  inline ::StringW get_CurrentPath();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonUnmarshallerContext__JsonPathStack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__JsonUnmarshallerContext__JsonPathStack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JsonUnmarshallerContext__JsonPathStack(__JsonUnmarshallerContext__JsonPathStack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JsonUnmarshallerContext__JsonPathStack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JsonUnmarshallerContext__JsonPathStack(__JsonUnmarshallerContext__JsonPathStack const&) = delete;

  /// @brief Field stack, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment>* ___stack;

  /// @brief Field currentDepth, offset: 0x18, size: 0x4, def value: None
  int32_t ___currentDepth;

  /// @brief Field stackStringBuilder, offset: 0x20, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___stackStringBuilder;

  /// @brief Field stackString, offset: 0x28, size: 0x8, def value: None
  ::StringW ___stackString;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack, ___stack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack, ___currentDepth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack, ___stackStringBuilder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack, ___stackString) == 0x28, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Transform
// Type: Amazon.Runtime.Internal.Transform::JsonUnmarshallerContext
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 98, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::JsonUnmarshallerContext*
class CORDL_TYPE JsonUnmarshallerContext : public ::Amazon::Runtime::Internal::Transform::UnmarshallerContext {
public:
  // Declarations
  using JsonPathStack = ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack;

  using PathSegment = ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment;

  using PathSegmentType = ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType;

  __declspec(property(get = get_CurrentDepth)) int32_t CurrentDepth;

  __declspec(property(get = get_CurrentPath))::StringW CurrentPath;

  __declspec(property(get = get_CurrentTokenType))::ThirdParty::Json::LitJson::JsonToken CurrentTokenType;

  __declspec(property(get = get_IsEndElement)) bool IsEndElement;

  __declspec(property(get = get_IsStartElement)) bool IsStartElement;

  __declspec(property(get = get_IsStartOfDocument)) bool IsStartOfDocument;

  __declspec(property(get = get_Stream))::System::IO::Stream* Stream;

  /// @brief Field currentField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_currentField, put = __cordl_internal_set_currentField))::StringW currentField;

  /// @brief Field currentToken, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_currentToken, put = __cordl_internal_set_currentToken))::System::Nullable_1<::ThirdParty::Json::LitJson::JsonToken> currentToken;

  /// @brief Field disposed, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Field jsonReader, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_jsonReader, put = __cordl_internal_set_jsonReader))::ThirdParty::Json::LitJson::JsonReader* jsonReader;

  /// @brief Field stack, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_stack, put = __cordl_internal_set_stack))::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack* stack;

  /// @brief Field streamReader, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_streamReader, put = __cordl_internal_set_streamReader))::System::IO::StreamReader* streamReader;

  /// @brief Field wasPeeked, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get_wasPeeked, put = __cordl_internal_set_wasPeeked)) bool wasPeeked;

  /// @brief Method Dispose, addr 0x244b278, size 0x4c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext* New_ctor(::System::IO::Stream* responseStream, bool maintainResponseBody,
                                                                                          ::Amazon::Runtime::Internal::Transform::IWebResponseData* responseData, bool isException);

  /// @brief Method Peek, addr 0x244acbc, size 0xa8, virtual false, abstract: false, final false
  inline bool Peek(::ThirdParty::Json::LitJson::JsonToken token);

  /// @brief Method Peek, addr 0x2449d44, size 0x90, virtual false, abstract: false, final false
  inline int32_t Peek();

  /// @brief Method Read, addr 0x244aa54, size 0xc0, virtual true, abstract: false, final false
  inline bool Read();

  /// @brief Method ReadText, addr 0x244ad64, size 0x2bc, virtual true, abstract: false, final false
  inline ::StringW ReadText();

  /// @brief Method StreamPeek, addr 0x244b044, size 0x58, virtual false, abstract: false, final false
  inline int32_t StreamPeek();

  /// @brief Method UpdateContext, addr 0x244ab14, size 0x1a8, virtual false, abstract: false, final false
  inline void UpdateContext();

  constexpr ::StringW const& __cordl_internal_get_currentField() const;

  constexpr ::StringW& __cordl_internal_get_currentField();

  constexpr ::System::Nullable_1<::ThirdParty::Json::LitJson::JsonToken> const& __cordl_internal_get_currentToken() const;

  constexpr ::System::Nullable_1<::ThirdParty::Json::LitJson::JsonToken>& __cordl_internal_get_currentToken();

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr ::ThirdParty::Json::LitJson::JsonReader*& __cordl_internal_get_jsonReader();

  constexpr ::cordl_internals::to_const_pointer<::ThirdParty::Json::LitJson::JsonReader*> const& __cordl_internal_get_jsonReader() const;

  constexpr ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack*& __cordl_internal_get_stack();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack*> const& __cordl_internal_get_stack() const;

  constexpr ::System::IO::StreamReader*& __cordl_internal_get_streamReader();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamReader*> const& __cordl_internal_get_streamReader() const;

  constexpr bool const& __cordl_internal_get_wasPeeked() const;

  constexpr bool& __cordl_internal_get_wasPeeked();

  constexpr void __cordl_internal_set_currentField(::StringW value);

  constexpr void __cordl_internal_set_currentToken(::System::Nullable_1<::ThirdParty::Json::LitJson::JsonToken> value);

  constexpr void __cordl_internal_set_disposed(bool value);

  constexpr void __cordl_internal_set_jsonReader(::ThirdParty::Json::LitJson::JsonReader* value);

  constexpr void __cordl_internal_set_stack(::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack* value);

  constexpr void __cordl_internal_set_streamReader(::System::IO::StreamReader* value);

  constexpr void __cordl_internal_set_wasPeeked(bool value);

  /// @brief Method .ctor, addr 0x244a3c0, size 0x38c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* responseStream, bool maintainResponseBody, ::Amazon::Runtime::Internal::Transform::IWebResponseData* responseData, bool isException);

  /// @brief Method get_CurrentDepth, addr 0x244a9ec, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_CurrentDepth();

  /// @brief Method get_CurrentPath, addr 0x244aa08, size 0x18, virtual true, abstract: false, final false
  inline ::StringW get_CurrentPath();

  /// @brief Method get_CurrentTokenType, addr 0x244a974, size 0x48, virtual false, abstract: false, final false
  inline ::ThirdParty::Json::LitJson::JsonToken get_CurrentTokenType();

  /// @brief Method get_IsEndElement, addr 0x244a9bc, size 0x18, virtual true, abstract: false, final false
  inline bool get_IsEndElement();

  /// @brief Method get_IsStartElement, addr 0x244a9d4, size 0x18, virtual true, abstract: false, final false
  inline bool get_IsStartElement();

  /// @brief Method get_IsStartOfDocument, addr 0x244a938, size 0x3c, virtual true, abstract: false, final false
  inline bool get_IsStartOfDocument();

  /// @brief Method get_Stream, addr 0x244b020, size 0x24, virtual false, abstract: false, final false
  inline ::System::IO::Stream* get_Stream();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonUnmarshallerContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonUnmarshallerContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonUnmarshallerContext(JsonUnmarshallerContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonUnmarshallerContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonUnmarshallerContext(JsonUnmarshallerContext const&) = delete;

  /// @brief Field streamReader, offset: 0x38, size: 0x8, def value: None
  ::System::IO::StreamReader* ___streamReader;

  /// @brief Field jsonReader, offset: 0x40, size: 0x8, def value: None
  ::ThirdParty::Json::LitJson::JsonReader* ___jsonReader;

  /// @brief Field stack, offset: 0x48, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack* ___stack;

  /// @brief Field currentField, offset: 0x50, size: 0x8, def value: None
  ::StringW ___currentField;

  /// @brief Field currentToken, offset: 0x58, size: 0x8, def value: None
  ::System::Nullable_1<::ThirdParty::Json::LitJson::JsonToken> ___currentToken;

  /// @brief Field disposed, offset: 0x60, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field wasPeeked, offset: 0x61, size: 0x1, def value: None
  bool ___wasPeeked;

  /// @brief Field DELIMITER offset 0xffffffff size 0x8
  static constexpr ::ConstString DELIMITER{ u"/" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext, 0x68>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext, ___streamReader) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext, ___jsonReader) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext, ___stack) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext, ___currentField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext, ___currentToken) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext, ___disposed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext, ___wasPeeked) == 0x61, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Transform
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegmentType, "Amazon.Runtime.Internal.Transform", "JsonUnmarshallerContext/PathSegmentType");
NEED_NO_BOX(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Transform::JsonUnmarshallerContext*, "Amazon.Runtime.Internal.Transform", "JsonUnmarshallerContext");
NEED_NO_BOX(::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__JsonPathStack*, "Amazon.Runtime.Internal.Transform", "JsonUnmarshallerContext/JsonPathStack");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Transform::__JsonUnmarshallerContext__PathSegment, "Amazon.Runtime.Internal.Transform", "JsonUnmarshallerContext/PathSegment");

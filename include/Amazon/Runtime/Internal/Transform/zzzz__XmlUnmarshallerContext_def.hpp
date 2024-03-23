#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Transform/zzzz__UnmarshallerContext_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlUnmarshallerContext)
namespace Amazon::Runtime::Internal::Transform {
class IWebResponseData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlReaderSettings;
}
namespace System::Xml {
class XmlReader;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Transform {
class XmlUnmarshallerContext;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext);
// Type: Amazon.Runtime.Internal.Transform::XmlUnmarshallerContext
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::XmlUnmarshallerContext*
class CORDL_TYPE XmlUnmarshallerContext : public ::Amazon::Runtime::Internal::Transform::UnmarshallerContext {
public:
  // Declarations
  __declspec(property(get = get_AllowEmptyElementLookup, put = set_AllowEmptyElementLookup))::System::Collections::Generic::HashSet_1<::StringW>* AllowEmptyElementLookup;

  __declspec(property(get = get_CurrentDepth)) int32_t CurrentDepth;

  __declspec(property(get = get_CurrentPath))::StringW CurrentPath;

  __declspec(property(get = get_IsAttribute)) bool IsAttribute;

  __declspec(property(get = get_IsEndElement)) bool IsEndElement;

  __declspec(property(get = get_IsStartElement)) bool IsStartElement;

  __declspec(property(get = get_IsStartOfDocument)) bool IsStartOfDocument;

  /// @brief Field READER_SETTINGS, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_READER_SETTINGS, put = setStaticF_READER_SETTINGS))::System::Xml::XmlReaderSettings* READER_SETTINGS;

  __declspec(property(get = get_Stream))::System::IO::Stream* Stream;

  __declspec(property(get = get_XmlReader))::System::Xml::XmlReader* XmlReader;

  /// @brief Field <AllowEmptyElementLookup>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__AllowEmptyElementLookup_k__BackingField,
                      put = __cordl_internal_set__AllowEmptyElementLookup_k__BackingField))::System::Collections::Generic::HashSet_1<::StringW>* _AllowEmptyElementLookup_k__BackingField;

  /// @brief Field _xmlReader, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__xmlReader, put = __cordl_internal_set__xmlReader))::System::Xml::XmlReader* _xmlReader;

  /// @brief Field attributeEnumerator, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeEnumerator, put = __cordl_internal_set_attributeEnumerator))::System::Collections::Generic::IEnumerator_1<::StringW>* attributeEnumerator;

  /// @brief Field attributeNames, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeNames, put = __cordl_internal_set_attributeNames))::System::Collections::Generic::List_1<::StringW>* attributeNames;

  /// @brief Field attributeValues, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeValues, put = __cordl_internal_set_attributeValues))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* attributeValues;

  /// @brief Field currentlyProcessingEmptyElement, offset 0x81, size 0x1
  __declspec(property(get = __cordl_internal_get_currentlyProcessingEmptyElement, put = __cordl_internal_set_currentlyProcessingEmptyElement)) bool currentlyProcessingEmptyElement;

  /// @brief Field disposed, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Field nodeContent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_nodeContent, put = __cordl_internal_set_nodeContent))::StringW nodeContent;

  /// @brief Field nodeType, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_nodeType, put = __cordl_internal_set_nodeType))::System::Xml::XmlNodeType nodeType;

  /// @brief Field nodesToSkip, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_nodesToSkip, put = setStaticF_nodesToSkip))::System::Collections::Generic::HashSet_1<::System::Xml::XmlNodeType>* nodesToSkip;

  /// @brief Field stack, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_stack, put = __cordl_internal_set_stack))::System::Collections::Generic::Stack_1<::StringW>* stack;

  /// @brief Field stackString, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_stackString, put = __cordl_internal_set_stackString))::StringW stackString;

  /// @brief Field streamReader, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_streamReader, put = __cordl_internal_set_streamReader))::System::IO::StreamReader* streamReader;

  /// @brief Method Dispose, addr 0x244f31c, size 0x60, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext* New_ctor(::System::IO::Stream* responseStream, bool maintainResponseBody,
                                                                                         ::Amazon::Runtime::Internal::Transform::IWebResponseData* responseData, bool isException);

  /// @brief Method Read, addr 0x244e820, size 0x578, virtual true, abstract: false, final false
  inline bool Read();

  /// @brief Method ReadElement, addr 0x244eec8, size 0x30c, virtual false, abstract: false, final false
  inline void ReadElement();

  /// @brief Method ReadText, addr 0x244f1d4, size 0xe8, virtual true, abstract: false, final false
  inline ::StringW ReadText();

  /// @brief Method StackToPath, addr 0x244ed98, size 0x130, virtual false, abstract: false, final false
  static inline ::StringW StackToPath(::System::Collections::Generic::Stack_1<::StringW>* stack);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__AllowEmptyElementLookup_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __cordl_internal_get__AllowEmptyElementLookup_k__BackingField() const;

  constexpr ::System::Xml::XmlReader*& __cordl_internal_get__xmlReader();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlReader*> const& __cordl_internal_get__xmlReader() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>*& __cordl_internal_get_attributeEnumerator();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::StringW>*> const& __cordl_internal_get_attributeEnumerator() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_attributeNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_attributeNames() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get_attributeValues();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get_attributeValues() const;

  constexpr bool const& __cordl_internal_get_currentlyProcessingEmptyElement() const;

  constexpr bool& __cordl_internal_get_currentlyProcessingEmptyElement();

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr ::StringW const& __cordl_internal_get_nodeContent() const;

  constexpr ::StringW& __cordl_internal_get_nodeContent();

  constexpr ::System::Xml::XmlNodeType const& __cordl_internal_get_nodeType() const;

  constexpr ::System::Xml::XmlNodeType& __cordl_internal_get_nodeType();

  constexpr ::System::Collections::Generic::Stack_1<::StringW>*& __cordl_internal_get_stack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::StringW>*> const& __cordl_internal_get_stack() const;

  constexpr ::StringW const& __cordl_internal_get_stackString() const;

  constexpr ::StringW& __cordl_internal_get_stackString();

  constexpr ::System::IO::StreamReader*& __cordl_internal_get_streamReader();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamReader*> const& __cordl_internal_get_streamReader() const;

  constexpr void __cordl_internal_set__AllowEmptyElementLookup_k__BackingField(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__xmlReader(::System::Xml::XmlReader* value);

  constexpr void __cordl_internal_set_attributeEnumerator(::System::Collections::Generic::IEnumerator_1<::StringW>* value);

  constexpr void __cordl_internal_set_attributeNames(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_attributeValues(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set_currentlyProcessingEmptyElement(bool value);

  constexpr void __cordl_internal_set_disposed(bool value);

  constexpr void __cordl_internal_set_nodeContent(::StringW value);

  constexpr void __cordl_internal_set_nodeType(::System::Xml::XmlNodeType value);

  constexpr void __cordl_internal_set_stack(::System::Collections::Generic::Stack_1<::StringW>* value);

  constexpr void __cordl_internal_set_stackString(::StringW value);

  constexpr void __cordl_internal_set_streamReader(::System::IO::StreamReader* value);

  /// @brief Method .ctor, addr 0x2449e7c, size 0x230, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* responseStream, bool maintainResponseBody, ::Amazon::Runtime::Internal::Transform::IWebResponseData* responseData, bool isException);

  static inline ::System::Xml::XmlReaderSettings* getStaticF_READER_SETTINGS();

  static inline ::System::Collections::Generic::HashSet_1<::System::Xml::XmlNodeType>* getStaticF_nodesToSkip();

  /// @brief Method get_AllowEmptyElementLookup, addr 0x244e714, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::StringW>* get_AllowEmptyElementLookup();

  /// @brief Method get_CurrentDepth, addr 0x244e7d8, size 0x48, virtual true, abstract: false, final false
  inline int32_t get_CurrentDepth();

  /// @brief Method get_CurrentPath, addr 0x244e7d0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_CurrentPath();

  /// @brief Method get_IsAttribute, addr 0x244f30c, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsAttribute();

  /// @brief Method get_IsEndElement, addr 0x244f2cc, size 0x10, virtual true, abstract: false, final false
  inline bool get_IsEndElement();

  /// @brief Method get_IsStartElement, addr 0x244f2bc, size 0x10, virtual true, abstract: false, final false
  inline bool get_IsStartElement();

  /// @brief Method get_IsStartOfDocument, addr 0x244f2dc, size 0x30, virtual true, abstract: false, final false
  inline bool get_IsStartOfDocument();

  /// @brief Method get_Stream, addr 0x244e6f0, size 0x24, virtual false, abstract: false, final false
  inline ::System::IO::Stream* get_Stream();

  /// @brief Method get_XmlReader, addr 0x244e724, size 0xac, virtual false, abstract: false, final false
  inline ::System::Xml::XmlReader* get_XmlReader();

  static inline void setStaticF_READER_SETTINGS(::System::Xml::XmlReaderSettings* value);

  static inline void setStaticF_nodesToSkip(::System::Collections::Generic::HashSet_1<::System::Xml::XmlNodeType>* value);

  /// @brief Method set_AllowEmptyElementLookup, addr 0x244e71c, size 0x8, virtual false, abstract: false, final false
  inline void set_AllowEmptyElementLookup(::System::Collections::Generic::HashSet_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlUnmarshallerContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlUnmarshallerContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlUnmarshallerContext(XmlUnmarshallerContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlUnmarshallerContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlUnmarshallerContext(XmlUnmarshallerContext const&) = delete;

  /// @brief Field streamReader, offset: 0x38, size: 0x8, def value: None
  ::System::IO::StreamReader* ___streamReader;

  /// @brief Field _xmlReader, offset: 0x40, size: 0x8, def value: None
  ::System::Xml::XmlReader* ____xmlReader;

  /// @brief Field stack, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::StringW>* ___stack;

  /// @brief Field stackString, offset: 0x50, size: 0x8, def value: None
  ::StringW ___stackString;

  /// @brief Field attributeValues, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ___attributeValues;

  /// @brief Field attributeNames, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___attributeNames;

  /// @brief Field attributeEnumerator, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::StringW>* ___attributeEnumerator;

  /// @brief Field nodeType, offset: 0x70, size: 0x4, def value: None
  ::System::Xml::XmlNodeType ___nodeType;

  /// @brief Field nodeContent, offset: 0x78, size: 0x8, def value: None
  ::StringW ___nodeContent;

  /// @brief Field disposed, offset: 0x80, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field currentlyProcessingEmptyElement, offset: 0x81, size: 0x1, def value: None
  bool ___currentlyProcessingEmptyElement;

  /// @brief Field <AllowEmptyElementLookup>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____AllowEmptyElementLookup_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext, 0x90>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext, ___streamReader) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext, ____xmlReader) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext, ___stack) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext, ___stackString) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext, ___attributeValues) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext, ___attributeNames) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext, ___attributeEnumerator) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext, ___nodeType) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext, ___nodeContent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext, ___disposed) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext, ___currentlyProcessingEmptyElement) == 0x81, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext, ____AllowEmptyElementLookup_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Transform
NEED_NO_BOX(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*, "Amazon.Runtime.Internal.Transform", "XmlUnmarshallerContext");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonSerializerInternalBase)
namespace Newtonsoft::Json::Serialization {
class ErrorContext;
}
namespace Newtonsoft::Json::Serialization {
class ITraceWriter;
}
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonObjectContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonProperty;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerProxy;
}
namespace Newtonsoft::Json::Serialization {
class __JsonSerializerInternalBase__ReferenceEqualsEqualityComparer;
}
namespace Newtonsoft::Json::Utilities {
template <typename TFirst, typename TSecond> class BidirectionalDictionary_2;
}
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
struct NullValueHandling;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalBase;
}
namespace Newtonsoft::Json::Serialization {
class __JsonSerializerInternalBase__ReferenceEqualsEqualityComparer;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonSerializerInternalBase);
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer);
// Type: ::ReferenceEqualsEqualityComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::JsonSerializerInternalBase::ReferenceEqualsEqualityComparer*
class CORDL_TYPE __JsonSerializerInternalBase__ReferenceEqualsEqualityComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*() noexcept;

  static inline ::Newtonsoft::Json::Serialization::__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer* New_ctor();

  /// @brief Method System.Collections.Generic.IEqualityComparer<System.Object>.Equals, addr 0xf10af8, size 0xc, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_IEqualityComparer_System_Object__Equals(::System::Object* x, ::System::Object* y);

  /// @brief Method System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode, addr 0xf10b04, size 0xc, virtual true, abstract: false, final true
  inline int32_t System_Collections_Generic_IEqualityComparer_System_Object__GetHashCode(::System::Object* obj);

  /// @brief Method .ctor, addr 0xf1053c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEqualityComparer_1<::System::Object*>* i___System__Collections__Generic__IEqualityComparer_1___System__Object__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonSerializerInternalBase__ReferenceEqualsEqualityComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JsonSerializerInternalBase__ReferenceEqualsEqualityComparer(__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JsonSerializerInternalBase__ReferenceEqualsEqualityComparer(__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
// Type: Newtonsoft.Json.Serialization::JsonSerializerInternalBase
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Serialization::JsonSerializerInternalBase*
class CORDL_TYPE JsonSerializerInternalBase : public ::System::Object {
public:
  // Declarations
  using ReferenceEqualsEqualityComparer = ::Newtonsoft::Json::Serialization::__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer;

  __declspec(property(get = get_DefaultReferenceMappings))::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::System::Object*>* DefaultReferenceMappings;

  /// @brief Field InternalSerializer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_InternalSerializer, put = __cordl_internal_set_InternalSerializer))::Newtonsoft::Json::Serialization::JsonSerializerProxy* InternalSerializer;

  /// @brief Field Serializer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Serializer, put = __cordl_internal_set_Serializer))::Newtonsoft::Json::JsonSerializer* Serializer;

  /// @brief Field TraceWriter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_TraceWriter, put = __cordl_internal_set_TraceWriter))::Newtonsoft::Json::Serialization::ITraceWriter* TraceWriter;

  /// @brief Field _currentErrorContext, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__currentErrorContext, put = __cordl_internal_set__currentErrorContext))::Newtonsoft::Json::Serialization::ErrorContext* _currentErrorContext;

  /// @brief Field _mappings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__mappings, put = __cordl_internal_set__mappings))::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::System::Object*>* _mappings;

  /// @brief Method ClearErrorContext, addr 0xf106bc, size 0x64, virtual false, abstract: false, final false
  inline void ClearErrorContext();

  /// @brief Method GetErrorContext, addr 0xf105d0, size 0xec, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::ErrorContext* GetErrorContext(::System::Object* currentObject, ::System::Object* member, ::StringW path, ::System::Exception* error);

  /// @brief Method IsErrorHandled, addr 0xf10720, size 0x3d8, virtual false, abstract: false, final false
  inline bool IsErrorHandled(::System::Object* currentObject, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Object* keyValue, ::Newtonsoft::Json::IJsonLineInfo* lineInfo,
                             ::StringW path, ::System::Exception* ex);

  static inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase* New_ctor(::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method ResolvedNullValueHandling, addr 0xf10544, size 0x8c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::NullValueHandling ResolvedNullValueHandling(::Newtonsoft::Json::Serialization::JsonObjectContract* containerContract,
                                                                         ::Newtonsoft::Json::Serialization::JsonProperty* property);

  constexpr ::Newtonsoft::Json::Serialization::JsonSerializerProxy*& __cordl_internal_get_InternalSerializer();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::JsonSerializerProxy*> const& __cordl_internal_get_InternalSerializer() const;

  constexpr ::Newtonsoft::Json::JsonSerializer*& __cordl_internal_get_Serializer();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::JsonSerializer*> const& __cordl_internal_get_Serializer() const;

  constexpr ::Newtonsoft::Json::Serialization::ITraceWriter*& __cordl_internal_get_TraceWriter();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::ITraceWriter*> const& __cordl_internal_get_TraceWriter() const;

  constexpr ::Newtonsoft::Json::Serialization::ErrorContext*& __cordl_internal_get__currentErrorContext();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::ErrorContext*> const& __cordl_internal_get__currentErrorContext() const;

  constexpr ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::System::Object*>*& __cordl_internal_get__mappings();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::System::Object*>*> const& __cordl_internal_get__mappings() const;

  constexpr void __cordl_internal_set_InternalSerializer(::Newtonsoft::Json::Serialization::JsonSerializerProxy* value);

  constexpr void __cordl_internal_set_Serializer(::Newtonsoft::Json::JsonSerializer* value);

  constexpr void __cordl_internal_set_TraceWriter(::Newtonsoft::Json::Serialization::ITraceWriter* value);

  constexpr void __cordl_internal_set__currentErrorContext(::Newtonsoft::Json::Serialization::ErrorContext* value);

  constexpr void __cordl_internal_set__mappings(::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::System::Object*>* value);

  /// @brief Method .ctor, addr 0xf104b8, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method get_DefaultReferenceMappings, addr 0xf0b5d8, size 0x110, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::System::Object*>* get_DefaultReferenceMappings();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSerializerInternalBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSerializerInternalBase(JsonSerializerInternalBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSerializerInternalBase(JsonSerializerInternalBase const&) = delete;

  /// @brief Field _currentErrorContext, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ErrorContext* ____currentErrorContext;

  /// @brief Field _mappings, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW, ::System::Object*>* ____mappings;

  /// @brief Field Serializer, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonSerializer* ___Serializer;

  /// @brief Field TraceWriter, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ITraceWriter* ___TraceWriter;

  /// @brief Field InternalSerializer, offset: 0x30, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::JsonSerializerProxy* ___InternalSerializer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonSerializerInternalBase, 0x38>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalBase, ____currentErrorContext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalBase, ____mappings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalBase, ___Serializer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalBase, ___TraceWriter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalBase, ___InternalSerializer) == 0x30, "Offset mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonSerializerInternalBase);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonSerializerInternalBase*, "Newtonsoft.Json.Serialization", "JsonSerializerInternalBase");
NEED_NO_BOX(::Newtonsoft::Json::Serialization::__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::__JsonSerializerInternalBase__ReferenceEqualsEqualityComparer*, "Newtonsoft.Json.Serialization",
                       "JsonSerializerInternalBase/ReferenceEqualsEqualityComparer");

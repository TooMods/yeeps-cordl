#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__Converter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Converter_1)
namespace Amazon::DynamoDBv2::DocumentModel {
class Document;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBBool;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBList;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class PrimitiveList;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Primitive;
}
namespace Amazon::DynamoDBv2 {
template <typename T> class __Converter_1___GetTargetTypes_d__0;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::DynamoDBv2 {
template <typename T> class Converter_1;
}
namespace Amazon::DynamoDBv2 {
template <typename T> class __Converter_1___GetTargetTypes_d__0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::DynamoDBv2::Converter_1);
MARK_GEN_REF_PTR_T(::Amazon::DynamoDBv2::__Converter_1___GetTargetTypes_d__0);
// Type: ::<GetTargetTypes>d__0
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Converter`1::<GetTargetTypes>d__0<T>*
class CORDL_TYPE __Converter_1___GetTargetTypes_d__0 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Type__get_Current))::System::Type* System_Collections_Generic_IEnumerator_System_Type__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Type* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <type>5__2, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__type_5__2, put = __cordl_internal_set__type_5__2))::System::Type* _type_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Type*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Type*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Amazon::DynamoDBv2::__Converter_1___GetTargetTypes_d__0<T>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>* System_Collections_Generic_IEnumerable_System_Type__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Type>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Type* System_Collections_Generic_IEnumerator_System_Type__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Type*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get___2__current() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Type*& __cordl_internal_get__type_5__2();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__type_5__2() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Type* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__type_5__2(::System::Type* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Type*>* i___System__Collections__Generic__IEnumerable_1___System__Type__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>* i___System__Collections__Generic__IEnumerator_1___System__Type__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Converter_1___GetTargetTypes_d__0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Converter_1___GetTargetTypes_d__0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Converter_1___GetTargetTypes_d__0(__Converter_1___GetTargetTypes_d__0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Converter_1___GetTargetTypes_d__0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Converter_1___GetTargetTypes_d__0(__Converter_1___GetTargetTypes_d__0 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Type* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <type>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::Type* ____type_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::DynamoDBv2
// Type: Amazon.DynamoDBv2::Converter`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::Converter`1<T>*
class CORDL_TYPE Converter_1 : public ::Amazon::DynamoDBv2::Converter {
public:
  // Declarations
  using _GetTargetTypes_d__0 = ::Amazon::DynamoDBv2::__Converter_1___GetTargetTypes_d__0<T>;

  /// @brief Method GetTargetTypes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetTargetTypes();

  static inline ::Amazon::DynamoDBv2::Converter_1<T>* New_ctor();

  /// @brief Method TryFrom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryFrom(::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool* b, ::System::Type* targetType, ByRef<::System::Object*> result);

  /// @brief Method TryFrom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryFrom(::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool* b, ::System::Type* targetType, ByRef<T> result);

  /// @brief Method TryFrom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryFrom(::Amazon::DynamoDBv2::DocumentModel::Document* d, ::System::Type* targetType, ByRef<::System::Object*> result);

  /// @brief Method TryFrom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryFrom(::Amazon::DynamoDBv2::DocumentModel::Document* d, ::System::Type* targetType, ByRef<T> result);

  /// @brief Method TryFrom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryFrom(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* l, ::System::Type* targetType, ByRef<::System::Object*> result);

  /// @brief Method TryFrom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryFrom(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* l, ::System::Type* targetType, ByRef<T> result);

  /// @brief Method TryFrom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryFrom(::Amazon::DynamoDBv2::DocumentModel::Primitive* p, ::System::Type* targetType, ByRef<::System::Object*> result);

  /// @brief Method TryFrom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryFrom(::Amazon::DynamoDBv2::DocumentModel::Primitive* p, ::System::Type* targetType, ByRef<T> result);

  /// @brief Method TryFrom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryFrom(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* pl, ::System::Type* targetType, ByRef<::System::Object*> result);

  /// @brief Method TryFrom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryFrom(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* pl, ::System::Type* targetType, ByRef<T> result);

  /// @brief Method TryTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryTo(::System::Object* value, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool*> b);

  /// @brief Method TryTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryTo(::System::Object* value, ByRef<::Amazon::DynamoDBv2::DocumentModel::Document*> d);

  /// @brief Method TryTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryTo(::System::Object* value, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*> l);

  /// @brief Method TryTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryTo(::System::Object* value, ByRef<::Amazon::DynamoDBv2::DocumentModel::Primitive*> p);

  /// @brief Method TryTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryTo(::System::Object* value, ByRef<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*> pl);

  /// @brief Method TryTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryTo(T value, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool*> b);

  /// @brief Method TryTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryTo(T value, ByRef<::Amazon::DynamoDBv2::DocumentModel::Document*> d);

  /// @brief Method TryTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryTo(T value, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*> l);

  /// @brief Method TryTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryTo(T value, ByRef<::Amazon::DynamoDBv2::DocumentModel::Primitive*> p);

  /// @brief Method TryTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryTo(T value, ByRef<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*> pl);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Converter_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Converter_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Converter_1(Converter_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Converter_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Converter_1(Converter_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::DynamoDBv2
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::DynamoDBv2::Converter_1, "Amazon.DynamoDBv2", "Converter`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::DynamoDBv2::__Converter_1___GetTargetTypes_d__0, "Amazon.DynamoDBv2", "Converter`1/<GetTargetTypes>d__0");

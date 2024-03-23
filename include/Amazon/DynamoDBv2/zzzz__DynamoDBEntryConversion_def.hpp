#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__ConversionSchema_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DynamoDBEntryConversion)
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBEntry;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class PrimitiveList;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Primitive;
}
namespace Amazon::DynamoDBv2 {
struct ConversionSchema;
}
namespace Amazon::DynamoDBv2 {
class ConverterCache;
}
namespace Amazon::DynamoDBv2 {
class Converter;
}
namespace Amazon::DynamoDBv2 {
class __DynamoDBEntryConversion___ConvertFromEntries_d__30;
}
namespace Amazon::DynamoDBv2 {
class __DynamoDBEntryConversion___ConvertToEntries_d__28;
}
namespace Amazon::DynamoDBv2 {
template <typename T> class __DynamoDBEntryConversion___ConvertToEntries_d__29_1;
}
namespace Amazon::DynamoDBv2 {
class __DynamoDBEntryConversion___ToPrimitives_d__39;
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
class DynamoDBEntryConversion;
}
namespace Amazon::DynamoDBv2 {
class __DynamoDBEntryConversion___ConvertFromEntries_d__30;
}
namespace Amazon::DynamoDBv2 {
class __DynamoDBEntryConversion___ConvertToEntries_d__28;
}
namespace Amazon::DynamoDBv2 {
template <typename T> class __DynamoDBEntryConversion___ConvertToEntries_d__29_1;
}
namespace Amazon::DynamoDBv2 {
class __DynamoDBEntryConversion___ToPrimitives_d__39;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DynamoDBEntryConversion);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28);
MARK_GEN_REF_PTR_T(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39);
// Type: ::<ConvertToEntries>d__28
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::DynamoDBEntryConversion::<ConvertToEntries>d__28*
class CORDL_TYPE __DynamoDBEntryConversion___ConvertToEntries_d__28 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_Amazon_DynamoDBv2_DocumentModel_DynamoDBEntry__get_Current))::Amazon::DynamoDBv2::DocumentModel::
      DynamoDBEntry* System_Collections_Generic_IEnumerator_Amazon_DynamoDBv2_DocumentModel_DynamoDBEntry__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* __2__current;

  /// @brief Field <>3__elementType, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get___3__elementType, put = __cordl_internal_set___3__elementType))::System::Type* __3__elementType;

  /// @brief Field <>3__values, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__values, put = __cordl_internal_set___3__values))::System::Collections::IEnumerable* __3__values;

  /// @brief Field <>4__this, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Amazon::DynamoDBv2::DynamoDBEntryConversion* __4__this;

  /// @brief Field <>7__wrap1, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1))::System::Collections::IEnumerator* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field elementType, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_elementType, put = __cordl_internal_set_elementType))::System::Type* elementType;

  /// @brief Field values, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_values, put = __cordl_internal_set_values))::System::Collections::IEnumerable* values;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x120a3b4, size 0x2fc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<Amazon.DynamoDBv2.DocumentModel.DynamoDBEntry>.GetEnumerator, addr 0x120a7bc, size 0xb4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*
  System_Collections_Generic_IEnumerable_Amazon_DynamoDBv2_DocumentModel_DynamoDBEntry__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<Amazon.DynamoDBv2.DocumentModel.DynamoDBEntry>.get_Current, addr 0x120a76c, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* System_Collections_Generic_IEnumerator_Amazon_DynamoDBv2_DocumentModel_DynamoDBEntry__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x120a870, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x120a774, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x120a7b4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x120a398, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Type*& __cordl_internal_get___3__elementType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get___3__elementType() const;

  constexpr ::System::Collections::IEnumerable*& __cordl_internal_get___3__values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& __cordl_internal_get___3__values() const;

  constexpr ::Amazon::DynamoDBv2::DynamoDBEntryConversion*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DynamoDBEntryConversion*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::IEnumerator*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& __cordl_internal_get___7__wrap1() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Type*& __cordl_internal_get_elementType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_elementType() const;

  constexpr ::System::Collections::IEnumerable*& __cordl_internal_get_values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& __cordl_internal_get_values() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* value);

  constexpr void __cordl_internal_set___3__elementType(::System::Type* value);

  constexpr void __cordl_internal_set___3__values(::System::Collections::IEnumerable* value);

  constexpr void __cordl_internal_set___4__this(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::IEnumerator* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_elementType(::System::Type* value);

  constexpr void __cordl_internal_set_values(::System::Collections::IEnumerable* value);

  /// @brief Method <>m__Finally1, addr 0x120a6b0, size 0xbc, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x120953c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*
  i___System__Collections__Generic__IEnumerable_1___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*
  i___System__Collections__Generic__IEnumerator_1___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DynamoDBEntryConversion___ConvertToEntries_d__28();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DynamoDBEntryConversion___ConvertToEntries_d__28", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DynamoDBEntryConversion___ConvertToEntries_d__28(__DynamoDBEntryConversion___ConvertToEntries_d__28&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DynamoDBEntryConversion___ConvertToEntries_d__28", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DynamoDBEntryConversion___ConvertToEntries_d__28(__DynamoDBEntryConversion___ConvertToEntries_d__28 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field values, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::IEnumerable* ___values;

  /// @brief Field <>3__values, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::IEnumerable* _____3__values;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DynamoDBEntryConversion* _____4__this;

  /// @brief Field elementType, offset: 0x40, size: 0x8, def value: None
  ::System::Type* ___elementType;

  /// @brief Field <>3__elementType, offset: 0x48, size: 0x8, def value: None
  ::System::Type* _____3__elementType;

  /// @brief Field <>7__wrap1, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::IEnumerator* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28, ___values) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28, _____3__values) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28, _____4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28, ___elementType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28, _____3__elementType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28, _____7__wrap1) == 0x50, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2
// Type: ::<ConvertToEntries>d__29`1
// SizeInfo { instance_size: 80, native_size: 80, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::DynamoDBEntryConversion::<ConvertToEntries>d__29`1<T>*
class CORDL_TYPE __DynamoDBEntryConversion___ConvertToEntries_d__29_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_Amazon_DynamoDBv2_DocumentModel_DynamoDBEntry__get_Current))::Amazon::DynamoDBv2::DocumentModel::
      DynamoDBEntry* System_Collections_Generic_IEnumerator_Amazon_DynamoDBv2_DocumentModel_DynamoDBEntry__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* __2__current;

  /// @brief Field <>3__values, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__values, put = __cordl_internal_set___3__values))::System::Collections::Generic::IEnumerable_1<T>* __3__values;

  /// @brief Field <>4__this, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Amazon::DynamoDBv2::DynamoDBEntryConversion* __4__this;

  /// @brief Field <>7__wrap2, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap2, put = __cordl_internal_set___7__wrap2))::System::Collections::Generic::IEnumerator_1<T>* __7__wrap2;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <elementType>5__2, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__elementType_5__2, put = __cordl_internal_set__elementType_5__2))::System::Type* _elementType_5__2;

  /// @brief Field values, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_values, put = __cordl_internal_set_values))::System::Collections::Generic::IEnumerable_1<T>* values;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<Amazon.DynamoDBv2.DocumentModel.DynamoDBEntry>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*
  System_Collections_Generic_IEnumerable_Amazon_DynamoDBv2_DocumentModel_DynamoDBEntry__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<Amazon.DynamoDBv2.DocumentModel.DynamoDBEntry>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* System_Collections_Generic_IEnumerator_Amazon_DynamoDBv2_DocumentModel_DynamoDBEntry__get_Current();

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

  constexpr ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<T>*& __cordl_internal_get___3__values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> const& __cordl_internal_get___3__values() const;

  constexpr ::Amazon::DynamoDBv2::DynamoDBEntryConversion*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DynamoDBEntryConversion*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<T>*& __cordl_internal_get___7__wrap2();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<T>*> const& __cordl_internal_get___7__wrap2() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Type*& __cordl_internal_get__elementType_5__2();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__elementType_5__2() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<T>*& __cordl_internal_get_values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> const& __cordl_internal_get_values() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* value);

  constexpr void __cordl_internal_set___3__values(::System::Collections::Generic::IEnumerable_1<T>* value);

  constexpr void __cordl_internal_set___4__this(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value);

  constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<T>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__elementType_5__2(::System::Type* value);

  constexpr void __cordl_internal_set_values(::System::Collections::Generic::IEnumerable_1<T>* value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*
  i___System__Collections__Generic__IEnumerable_1___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*
  i___System__Collections__Generic__IEnumerator_1___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DynamoDBEntryConversion___ConvertToEntries_d__29_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DynamoDBEntryConversion___ConvertToEntries_d__29_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DynamoDBEntryConversion___ConvertToEntries_d__29_1(__DynamoDBEntryConversion___ConvertToEntries_d__29_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DynamoDBEntryConversion___ConvertToEntries_d__29_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DynamoDBEntryConversion___ConvertToEntries_d__29_1(__DynamoDBEntryConversion___ConvertToEntries_d__29_1 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field values, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<T>* ___values;

  /// @brief Field <>3__values, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<T>* _____3__values;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DynamoDBEntryConversion* _____4__this;

  /// @brief Field <elementType>5__2, offset: 0x40, size: 0x8, def value: None
  ::System::Type* ____elementType_5__2;

  /// @brief Field <>7__wrap2, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<T>* _____7__wrap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::DynamoDBv2
// Type: ::<ConvertFromEntries>d__30
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::DynamoDBEntryConversion::<ConvertFromEntries>d__30*
class CORDL_TYPE __DynamoDBEntryConversion___ConvertFromEntries_d__30 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>3__elementType, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get___3__elementType, put = __cordl_internal_set___3__elementType))::System::Type* __3__elementType;

  /// @brief Field <>3__entries, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__entries,
                      put = __cordl_internal_set___3__entries))::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* __3__entries;

  /// @brief Field <>4__this, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Amazon::DynamoDBv2::DynamoDBEntryConversion* __4__this;

  /// @brief Field <>7__wrap1, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field elementType, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_elementType, put = __cordl_internal_set_elementType))::System::Type* elementType;

  /// @brief Field entries, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_entries,
                      put = __cordl_internal_set_entries))::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* entries;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x120a890, size 0x30c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator, addr 0x120ac9c, size 0xb4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x120ac4c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x120ad50, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x120ac54, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x120ac94, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x120a874, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Type*& __cordl_internal_get___3__elementType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get___3__elementType() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*& __cordl_internal_get___3__entries();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*> const& __cordl_internal_get___3__entries() const;

  constexpr ::Amazon::DynamoDBv2::DynamoDBEntryConversion*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DynamoDBEntryConversion*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Type*& __cordl_internal_get_elementType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_elementType() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*& __cordl_internal_get_entries();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*> const& __cordl_internal_get_entries() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___3__elementType(::System::Type* value);

  constexpr void __cordl_internal_set___3__entries(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* value);

  constexpr void __cordl_internal_set___4__this(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_elementType(::System::Type* value);

  constexpr void __cordl_internal_set_entries(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* value);

  /// @brief Method <>m__Finally1, addr 0x120ab9c, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x12095fc, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Object*>* i___System__Collections__Generic__IEnumerable_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DynamoDBEntryConversion___ConvertFromEntries_d__30();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DynamoDBEntryConversion___ConvertFromEntries_d__30", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DynamoDBEntryConversion___ConvertFromEntries_d__30(__DynamoDBEntryConversion___ConvertFromEntries_d__30&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DynamoDBEntryConversion___ConvertFromEntries_d__30", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DynamoDBEntryConversion___ConvertFromEntries_d__30(__DynamoDBEntryConversion___ConvertFromEntries_d__30 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field entries, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* ___entries;

  /// @brief Field <>3__entries, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* _____3__entries;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DynamoDBEntryConversion* _____4__this;

  /// @brief Field elementType, offset: 0x40, size: 0x8, def value: None
  ::System::Type* ___elementType;

  /// @brief Field <>3__elementType, offset: 0x48, size: 0x8, def value: None
  ::System::Type* _____3__elementType;

  /// @brief Field <>7__wrap1, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30, ___entries) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30, _____3__entries) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30, _____4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30, ___elementType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30, _____3__elementType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30, _____7__wrap1) == 0x50, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2
// Type: ::<ToPrimitives>d__39
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::DynamoDBEntryConversion::<ToPrimitives>d__39*
class CORDL_TYPE __DynamoDBEntryConversion___ToPrimitives_d__39 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_Amazon_DynamoDBv2_DocumentModel_Primitive__get_Current))::Amazon::DynamoDBv2::DocumentModel::
      Primitive* System_Collections_Generic_IEnumerator_Amazon_DynamoDBv2_DocumentModel_Primitive__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::Amazon::DynamoDBv2::DocumentModel::Primitive* __2__current;

  /// @brief Field <>3__elementType, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__elementType, put = __cordl_internal_set___3__elementType))::System::Type* __3__elementType;

  /// @brief Field <>3__items, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___3__items, put = __cordl_internal_set___3__items))::System::Collections::IEnumerable* __3__items;

  /// @brief Field <>4__this, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Amazon::DynamoDBv2::DynamoDBEntryConversion* __4__this;

  /// @brief Field <>7__wrap1, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1))::System::Collections::IEnumerator* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field elementType, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_elementType, put = __cordl_internal_set_elementType))::System::Type* elementType;

  /// @brief Field items, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_items, put = __cordl_internal_set_items))::System::Collections::IEnumerable* items;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x120ad70, size 0x420, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<Amazon.DynamoDBv2.DocumentModel.Primitive>.GetEnumerator, addr 0x120b29c, size 0xb4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*
  System_Collections_Generic_IEnumerable_Amazon_DynamoDBv2_DocumentModel_Primitive__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<Amazon.DynamoDBv2.DocumentModel.Primitive>.get_Current, addr 0x120b24c, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* System_Collections_Generic_IEnumerator_Amazon_DynamoDBv2_DocumentModel_Primitive__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x120b350, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x120b254, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x120b294, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x120ad54, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::Amazon::DynamoDBv2::DocumentModel::Primitive*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::Primitive*> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Type*& __cordl_internal_get___3__elementType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get___3__elementType() const;

  constexpr ::System::Collections::IEnumerable*& __cordl_internal_get___3__items();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& __cordl_internal_get___3__items() const;

  constexpr ::Amazon::DynamoDBv2::DynamoDBEntryConversion*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DynamoDBEntryConversion*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::IEnumerator*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& __cordl_internal_get___7__wrap1() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Type*& __cordl_internal_get_elementType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_elementType() const;

  constexpr ::System::Collections::IEnumerable*& __cordl_internal_get_items();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& __cordl_internal_get_items() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::Amazon::DynamoDBv2::DocumentModel::Primitive* value);

  constexpr void __cordl_internal_set___3__elementType(::System::Type* value);

  constexpr void __cordl_internal_set___3__items(::System::Collections::IEnumerable* value);

  constexpr void __cordl_internal_set___4__this(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::IEnumerator* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_elementType(::System::Type* value);

  constexpr void __cordl_internal_set_items(::System::Collections::IEnumerable* value);

  /// @brief Method <>m__Finally1, addr 0x120b190, size 0xbc, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x120a364, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*
  i___System__Collections__Generic__IEnumerable_1___Amazon__DynamoDBv2__DocumentModel__Primitive__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*
  i___System__Collections__Generic__IEnumerator_1___Amazon__DynamoDBv2__DocumentModel__Primitive__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DynamoDBEntryConversion___ToPrimitives_d__39();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DynamoDBEntryConversion___ToPrimitives_d__39", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DynamoDBEntryConversion___ToPrimitives_d__39(__DynamoDBEntryConversion___ToPrimitives_d__39&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DynamoDBEntryConversion___ToPrimitives_d__39", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DynamoDBEntryConversion___ToPrimitives_d__39(__DynamoDBEntryConversion___ToPrimitives_d__39 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Primitive* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field elementType, offset: 0x28, size: 0x8, def value: None
  ::System::Type* ___elementType;

  /// @brief Field <>3__elementType, offset: 0x30, size: 0x8, def value: None
  ::System::Type* _____3__elementType;

  /// @brief Field items, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::IEnumerable* ___items;

  /// @brief Field <>3__items, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::IEnumerable* _____3__items;

  /// @brief Field <>4__this, offset: 0x48, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DynamoDBEntryConversion* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::IEnumerator* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39, ___elementType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39, _____3__elementType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39, ___items) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39, _____3__items) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39, _____4__this) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39, _____7__wrap1) == 0x50, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2
// Type: Amazon.DynamoDBv2::DynamoDBEntryConversion
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::DynamoDBEntryConversion*
class CORDL_TYPE DynamoDBEntryConversion : public ::System::Object {
public:
  // Declarations
  using _ConvertFromEntries_d__30 = ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30;

  using _ConvertToEntries_d__28 = ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28;

  template <typename T> using _ConvertToEntries_d__29_1 = ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>;

  using _ToPrimitives_d__39 = ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39;

  /// @brief Field ConverterCache, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ConverterCache, put = __cordl_internal_set_ConverterCache))::Amazon::DynamoDBv2::ConverterCache* ConverterCache;

  __declspec(property(get = get_IsImmutable, put = set_IsImmutable)) bool IsImmutable;

  /// @brief Field OriginalConversion, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_OriginalConversion, put = __cordl_internal_set_OriginalConversion))::Amazon::DynamoDBv2::ConversionSchema OriginalConversion;

  /// @brief Field <IsImmutable>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__IsImmutable_k__BackingField, put = __cordl_internal_set__IsImmutable_k__BackingField)) bool _IsImmutable_k__BackingField;

  /// @brief Field <V1>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__V1_k__BackingField, put = setStaticF__V1_k__BackingField))::Amazon::DynamoDBv2::DynamoDBEntryConversion* _V1_k__BackingField;

  /// @brief Field <V2>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__V2_k__BackingField, put = setStaticF__V2_k__BackingField))::Amazon::DynamoDBv2::DynamoDBEntryConversion* _V2_k__BackingField;

  /// @brief Method AddConverter, addr 0x1209f70, size 0x1c, virtual false, abstract: false, final false
  inline void AddConverter(::Amazon::DynamoDBv2::Converter* converter);

  /// @brief Method AddConverter, addr 0x1209ee4, size 0x8c, virtual false, abstract: false, final false
  inline void AddConverter(::System::Type* type);

  /// @brief Method AddConverters, addr 0x120978c, size 0x758, virtual false, abstract: false, final false
  inline void AddConverters(::StringW suffix);

  /// @brief Method Clone, addr 0x1208840, size 0x68, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* Clone();

  /// @brief Method ConvertFromEntries, addr 0x1209570, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>*
  ConvertFromEntries(::System::Type* elementType, ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* entries);

  /// @brief Method ConvertFromEntry, addr 0x12091c4, size 0x108, virtual false, abstract: false, final false
  inline ::System::Object* ConvertFromEntry(::System::Type* outputType, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* entry);

  /// @brief Method ConvertFromEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TOutput> inline TOutput ConvertFromEntry(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* entry);

  /// @brief Method ConvertToEntries, addr 0x12094b0, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* ConvertToEntries(::System::Type* elementType, ::System::Collections::IEnumerable* values);

  /// @brief Method ConvertToEntries, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* ConvertToEntries(::System::Collections::Generic::IEnumerable_1<T>* values);

  /// @brief Method ConvertToEntry, addr 0x1208f50, size 0x104, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* ConvertToEntry(::System::Type* inputType, ::System::Object* value);

  /// @brief Method ConvertToEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInput> inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* ConvertToEntry(TInput value);

  /// @brief Method GetConversion, addr 0x12082e4, size 0x134, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* GetConversion(::Amazon::DynamoDBv2::ConversionSchema schema);

  /// @brief Method HasConverter, addr 0x12088a8, size 0x28, virtual false, abstract: false, final false
  inline bool HasConverter(::System::Type* type);

  /// @brief Method ItemsToPrimitiveList, addr 0x1209630, size 0xd0, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* ItemsToPrimitiveList(::System::Collections::IEnumerable* items);

  static inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* New_ctor();

  static inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* New_ctor(::Amazon::DynamoDBv2::ConversionSchema schema, bool isImmutable);

  /// @brief Method SetV1Converters, addr 0x1208730, size 0x48, virtual false, abstract: false, final false
  inline void SetV1Converters();

  /// @brief Method SetV2Converters, addr 0x1208778, size 0x48, virtual false, abstract: false, final false
  inline void SetV2Converters();

  /// @brief Method ToPrimitives, addr 0x1209700, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* ToPrimitives(::System::Collections::IEnumerable* items, ::System::Type* elementType);

  /// @brief Method TryConvertFromEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TOutput> inline bool TryConvertFromEntry(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* entry, ByRef<TOutput> output);

  /// @brief Method TryConvertFromEntry, addr 0x1208be8, size 0x118, virtual false, abstract: false, final false
  inline bool TryConvertFromEntry(::System::Type* outputType, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* entry, ByRef<::System::Object*> value);

  /// @brief Method TryConvertToEntry, addr 0x12088ec, size 0x114, virtual false, abstract: false, final false
  inline bool TryConvertToEntry(::System::Type* inputType, ::System::Object* value, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*> entry);

  /// @brief Method TryConvertToEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInput> inline bool TryConvertToEntry(TInput value, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*> entry);

  constexpr ::Amazon::DynamoDBv2::ConverterCache*& __cordl_internal_get_ConverterCache();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ConverterCache*> const& __cordl_internal_get_ConverterCache() const;

  constexpr ::Amazon::DynamoDBv2::ConversionSchema const& __cordl_internal_get_OriginalConversion() const;

  constexpr ::Amazon::DynamoDBv2::ConversionSchema& __cordl_internal_get_OriginalConversion();

  constexpr bool const& __cordl_internal_get__IsImmutable_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsImmutable_k__BackingField();

  constexpr void __cordl_internal_set_ConverterCache(::Amazon::DynamoDBv2::ConverterCache* value);

  constexpr void __cordl_internal_set_OriginalConversion(::Amazon::DynamoDBv2::ConversionSchema value);

  constexpr void __cordl_internal_set__IsImmutable_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x12087c0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x12085c4, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::ConversionSchema schema, bool isImmutable);

  static inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* getStaticF__V1_k__BackingField();

  static inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* getStaticF__V2_k__BackingField();

  /// @brief Method get_CurrentConversion, addr 0x1208418, size 0xb4, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* get_CurrentConversion();

  /// @brief Method get_IsImmutable, addr 0x120882c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsImmutable();

  /// @brief Method get_V1, addr 0x120817c, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* get_V1();

  /// @brief Method get_V2, addr 0x1208230, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* get_V2();

  static inline void setStaticF__V1_k__BackingField(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value);

  static inline void setStaticF__V2_k__BackingField(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value);

  /// @brief Method set_IsImmutable, addr 0x1208834, size 0xc, virtual false, abstract: false, final false
  inline void set_IsImmutable(bool value);

  /// @brief Method set_V1, addr 0x12081d4, size 0x5c, virtual false, abstract: false, final false
  static inline void set_V1(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value);

  /// @brief Method set_V2, addr 0x1208288, size 0x5c, virtual false, abstract: false, final false
  static inline void set_V2(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamoDBEntryConversion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBEntryConversion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamoDBEntryConversion(DynamoDBEntryConversion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBEntryConversion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamoDBEntryConversion(DynamoDBEntryConversion const&) = delete;

  /// @brief Field <IsImmutable>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____IsImmutable_k__BackingField;

  /// @brief Field ConverterCache, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ConverterCache* ___ConverterCache;

  /// @brief Field OriginalConversion, offset: 0x20, size: 0x4, def value: None
  ::Amazon::DynamoDBv2::ConversionSchema ___OriginalConversion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DynamoDBEntryConversion, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DynamoDBEntryConversion, ____IsImmutable_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DynamoDBEntryConversion, ___ConverterCache) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DynamoDBEntryConversion, ___OriginalConversion) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::DynamoDBEntryConversion);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DynamoDBEntryConversion*, "Amazon.DynamoDBv2", "DynamoDBEntryConversion");
NEED_NO_BOX(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30*, "Amazon.DynamoDBv2", "DynamoDBEntryConversion/<ConvertFromEntries>d__30");
NEED_NO_BOX(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28*, "Amazon.DynamoDBv2", "DynamoDBEntryConversion/<ConvertToEntries>d__28");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1, "Amazon.DynamoDBv2", "DynamoDBEntryConversion/<ConvertToEntries>d__29`1");
NEED_NO_BOX(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39*, "Amazon.DynamoDBv2", "DynamoDBEntryConversion/<ToPrimitives>d__39");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__Converter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CollectionConverter)
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBEntry;
}
namespace Amazon::DynamoDBv2 {
class __CollectionConverter___GetTargetTypes_d__1;
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
class CollectionConverter;
}
namespace Amazon::DynamoDBv2 {
class __CollectionConverter___GetTargetTypes_d__1;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::CollectionConverter);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::__CollectionConverter___GetTargetTypes_d__1);
// Type: ::<GetTargetTypes>d__1
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::CollectionConverter::<GetTargetTypes>d__1*
class CORDL_TYPE __CollectionConverter___GetTargetTypes_d__1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Type__get_Current))::System::Type* System_Collections_Generic_IEnumerator_System_Type__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Type* __2__current;

  /// @brief Field <>3__memberTypes, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__memberTypes, put = __cordl_internal_set___3__memberTypes))::System::Collections::Generic::IEnumerable_1<::System::Type*>* __3__memberTypes;

  /// @brief Field <>7__wrap3, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap3, put = __cordl_internal_set___7__wrap3))::System::Collections::Generic::IEnumerator_1<::System::Type*>* __7__wrap3;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <listType>5__2, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__listType_5__2, put = __cordl_internal_set__listType_5__2))::System::Type* _listType_5__2;

  /// @brief Field <pt>5__5, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__pt_5__5, put = __cordl_internal_set__pt_5__5))::System::Type* _pt_5__5;

  /// @brief Field <setType>5__3, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__setType_5__3, put = __cordl_internal_set__setType_5__3))::System::Type* _setType_5__3;

  /// @brief Field memberTypes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_memberTypes, put = __cordl_internal_set_memberTypes))::System::Collections::Generic::IEnumerable_1<::System::Type*>* memberTypes;

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

  /// @brief Method MoveNext, addr 0x120d898, size 0x524, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Amazon::DynamoDBv2::__CollectionConverter___GetTargetTypes_d__1* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator, addr 0x120debc, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>* System_Collections_Generic_IEnumerable_System_Type__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Type>.get_Current, addr 0x120de6c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* System_Collections_Generic_IEnumerator_System_Type__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x120df60, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x120de74, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x120deb4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x120d86c, size 0x2c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Type*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Type*>*& __cordl_internal_get___3__memberTypes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::System::Type*>*> const& __cordl_internal_get___3__memberTypes() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>*& __cordl_internal_get___7__wrap3();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::System::Type*>*> const& __cordl_internal_get___7__wrap3() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Type*& __cordl_internal_get__listType_5__2();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__listType_5__2() const;

  constexpr ::System::Type*& __cordl_internal_get__pt_5__5();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__pt_5__5() const;

  constexpr ::System::Type*& __cordl_internal_get__setType_5__3();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__setType_5__3() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Type*>*& __cordl_internal_get_memberTypes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::System::Type*>*> const& __cordl_internal_get_memberTypes() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Type* value);

  constexpr void __cordl_internal_set___3__memberTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* value);

  constexpr void __cordl_internal_set___7__wrap3(::System::Collections::Generic::IEnumerator_1<::System::Type*>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__listType_5__2(::System::Type* value);

  constexpr void __cordl_internal_set__pt_5__5(::System::Type* value);

  constexpr void __cordl_internal_set__setType_5__3(::System::Type* value);

  constexpr void __cordl_internal_set_memberTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* value);

  /// @brief Method <>m__Finally1, addr 0x120ddbc, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x120d760, size 0x34, virtual false, abstract: false, final false
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
  constexpr __CollectionConverter___GetTargetTypes_d__1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CollectionConverter___GetTargetTypes_d__1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CollectionConverter___GetTargetTypes_d__1(__CollectionConverter___GetTargetTypes_d__1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CollectionConverter___GetTargetTypes_d__1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CollectionConverter___GetTargetTypes_d__1(__CollectionConverter___GetTargetTypes_d__1 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Type* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field memberTypes, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::System::Type*>* ___memberTypes;

  /// @brief Field <>3__memberTypes, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::System::Type*>* _____3__memberTypes;

  /// @brief Field <listType>5__2, offset: 0x38, size: 0x8, def value: None
  ::System::Type* ____listType_5__2;

  /// @brief Field <setType>5__3, offset: 0x40, size: 0x8, def value: None
  ::System::Type* ____setType_5__3;

  /// @brief Field <>7__wrap3, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::System::Type*>* _____7__wrap3;

  /// @brief Field <pt>5__5, offset: 0x50, size: 0x8, def value: None
  ::System::Type* ____pt_5__5;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::__CollectionConverter___GetTargetTypes_d__1, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__CollectionConverter___GetTargetTypes_d__1, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__CollectionConverter___GetTargetTypes_d__1, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__CollectionConverter___GetTargetTypes_d__1, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__CollectionConverter___GetTargetTypes_d__1, ___memberTypes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__CollectionConverter___GetTargetTypes_d__1, _____3__memberTypes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__CollectionConverter___GetTargetTypes_d__1, ____listType_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__CollectionConverter___GetTargetTypes_d__1, ____setType_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__CollectionConverter___GetTargetTypes_d__1, _____7__wrap3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__CollectionConverter___GetTargetTypes_d__1, ____pt_5__5) == 0x50, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2
// Type: Amazon.DynamoDBv2::CollectionConverter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::CollectionConverter*
class CORDL_TYPE CollectionConverter : public ::Amazon::DynamoDBv2::Converter {
public:
  // Declarations
  using _GetTargetTypes_d__1 = ::Amazon::DynamoDBv2::__CollectionConverter___GetTargetTypes_d__1;

  /// @brief Field targetTypes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_targetTypes, put = __cordl_internal_set_targetTypes))::System::Collections::Generic::IEnumerable_1<::System::Type*>* targetTypes;

  /// @brief Method EntriesToCollection, addr 0x120d7cc, size 0xa0, virtual false, abstract: false, final false
  inline bool EntriesToCollection(::System::Type* targetType, ::System::Type* elementType, ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* entries,
                                  ByRef<::System::Object*> result);

  /// @brief Method GetTargetTypes, addr 0x120d7c4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetTargetTypes();

  /// @brief Method GetTargetTypes, addr 0x120d6e8, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetTargetTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* memberTypes);

  static inline ::Amazon::DynamoDBv2::CollectionConverter* New_ctor(::System::Collections::Generic::IEnumerable_1<::System::Type*>* memberTypes);

  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Type*>*& __cordl_internal_get_targetTypes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::System::Type*>*> const& __cordl_internal_get_targetTypes() const;

  constexpr void __cordl_internal_set_targetTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* value);

  /// @brief Method .ctor, addr 0x120d794, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Type*>* memberTypes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectionConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionConverter(CollectionConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionConverter(CollectionConverter const&) = delete;

  /// @brief Field targetTypes, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::System::Type*>* ___targetTypes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::CollectionConverter, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::CollectionConverter, ___targetTypes) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::CollectionConverter);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::CollectionConverter*, "Amazon.DynamoDBv2", "CollectionConverter");
NEED_NO_BOX(::Amazon::DynamoDBv2::__CollectionConverter___GetTargetTypes_d__1);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::__CollectionConverter___GetTargetTypes_d__1*, "Amazon.DynamoDBv2", "CollectionConverter/<GetTargetTypes>d__1");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Utils)
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBAttribute;
}
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBTableAttribute;
}
namespace Amazon::DynamoDBv2::DataModel {
class IDynamoDBContext;
}
namespace Amazon::DynamoDBv2::DataModel {
class __Utils___GetConstructors_d__27;
}
namespace Amazon::DynamoDBv2::DataModel {
class __Utils____c;
}
namespace Amazon::DynamoDBv2::DataModel {
class __Utils____c__DisplayClass3_0;
}
namespace Amazon::Util::Internal {
class ITypeInfo;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Reflection {
class MemberInfo;
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
namespace Amazon::DynamoDBv2::DataModel {
class Utils;
}
namespace Amazon::DynamoDBv2::DataModel {
class __Utils___GetConstructors_d__27;
}
namespace Amazon::DynamoDBv2::DataModel {
class __Utils____c;
}
namespace Amazon::DynamoDBv2::DataModel {
class __Utils____c__DisplayClass3_0;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::Utils);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::__Utils____c);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::__Utils____c__DisplayClass3_0);
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Utils::<>c__DisplayClass3_0*
class CORDL_TYPE __Utils____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field typeWrapper, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_typeWrapper, put = __cordl_internal_set_typeWrapper))::Amazon::Util::Internal::ITypeInfo* typeWrapper;

  static inline ::Amazon::DynamoDBv2::DataModel::__Utils____c__DisplayClass3_0* New_ctor();

  /// @brief Method <IsPrimitive>b__0, addr 0x1433e5c, size 0xac, virtual false, abstract: false, final false
  inline bool _IsPrimitive_b__0(::Amazon::Util::Internal::ITypeInfo* ti);

  constexpr ::Amazon::Util::Internal::ITypeInfo*& __cordl_internal_get_typeWrapper();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::Internal::ITypeInfo*> const& __cordl_internal_get_typeWrapper() const;

  constexpr void __cordl_internal_set_typeWrapper(::Amazon::Util::Internal::ITypeInfo* value);

  /// @brief Method .ctor, addr 0x1431e40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Utils____c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Utils____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Utils____c__DisplayClass3_0(__Utils____c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Utils____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Utils____c__DisplayClass3_0(__Utils____c__DisplayClass3_0 const&) = delete;

  /// @brief Field typeWrapper, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Util::Internal::ITypeInfo* ___typeWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::__Utils____c__DisplayClass3_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__Utils____c__DisplayClass3_0, ___typeWrapper) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
// Type: ::<GetConstructors>d__27
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Utils::<GetConstructors>d__27*
class CORDL_TYPE __Utils___GetConstructors_d__27 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Reflection_ConstructorInfo__get_Current))::System::Reflection::
      ConstructorInfo* System_Collections_Generic_IEnumerator_System_Reflection_ConstructorInfo__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Reflection::ConstructorInfo* __2__current;

  /// @brief Field <>3__typeInfo, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___3__typeInfo, put = __cordl_internal_set___3__typeInfo))::Amazon::Util::Internal::ITypeInfo* __3__typeInfo;

  /// @brief Field <>3__validConstructorInputs, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__validConstructorInputs, put = __cordl_internal_set___3__validConstructorInputs))::ArrayW<
      ::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
      ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*> __3__validConstructorInputs;

  /// @brief Field <>7__wrap1, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1))::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                                      ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*> __7__wrap1;

  /// @brief Field <>7__wrap2, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get___7__wrap2, put = __cordl_internal_set___7__wrap2)) int32_t __7__wrap2;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field typeInfo, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_typeInfo, put = __cordl_internal_set_typeInfo))::Amazon::Util::Internal::ITypeInfo* typeInfo;

  /// @brief Field validConstructorInputs, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get_validConstructorInputs,
      put = __cordl_internal_set_validConstructorInputs))::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                                  ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*> validConstructorInputs;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Reflection::ConstructorInfo*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Reflection::ConstructorInfo*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Reflection::ConstructorInfo*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Reflection::ConstructorInfo*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x1433f0c, size 0x17c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Reflection.ConstructorInfo>.GetEnumerator, addr 0x14340d8, size 0xac, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Reflection::ConstructorInfo*>* System_Collections_Generic_IEnumerable_System_Reflection_ConstructorInfo__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Reflection.ConstructorInfo>.get_Current, addr 0x1434088, size 0x8, virtual true, abstract: false, final true
  inline ::System::Reflection::ConstructorInfo* System_Collections_Generic_IEnumerator_System_Reflection_ConstructorInfo__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1434184, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x1434090, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x14340d0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x1433f08, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Reflection::ConstructorInfo*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::ConstructorInfo*> const& __cordl_internal_get___2__current() const;

  constexpr ::Amazon::Util::Internal::ITypeInfo*& __cordl_internal_get___3__typeInfo();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::Internal::ITypeInfo*> const& __cordl_internal_get___3__typeInfo() const;

  constexpr ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                     ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*> const&
  __cordl_internal_get___3__validConstructorInputs() const;

  constexpr ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                     ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>&
  __cordl_internal_get___3__validConstructorInputs();

  constexpr ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                     ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*> const&
  __cordl_internal_get___7__wrap1() const;

  constexpr ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                     ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>&
  __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___7__wrap2() const;

  constexpr int32_t& __cordl_internal_get___7__wrap2();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::Amazon::Util::Internal::ITypeInfo*& __cordl_internal_get_typeInfo();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::Internal::ITypeInfo*> const& __cordl_internal_get_typeInfo() const;

  constexpr ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                     ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*> const&
  __cordl_internal_get_validConstructorInputs() const;

  constexpr ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                     ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>&
  __cordl_internal_get_validConstructorInputs();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Reflection::ConstructorInfo* value);

  constexpr void __cordl_internal_set___3__typeInfo(::Amazon::Util::Internal::ITypeInfo* value);

  constexpr void __cordl_internal_set___3__validConstructorInputs(::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                                           ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>
                                                                      value);

  constexpr void __cordl_internal_set___7__wrap1(::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                          ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>
                                                     value);

  constexpr void __cordl_internal_set___7__wrap2(int32_t value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_typeInfo(::Amazon::Util::Internal::ITypeInfo* value);

  constexpr void __cordl_internal_set_validConstructorInputs(::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                                      ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>
                                                                 value);

  /// @brief Method .ctor, addr 0x1433458, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Reflection::ConstructorInfo*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Reflection::ConstructorInfo*>* i___System__Collections__Generic__IEnumerable_1___System__Reflection__ConstructorInfo__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Reflection::ConstructorInfo*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Reflection::ConstructorInfo*>* i___System__Collections__Generic__IEnumerator_1___System__Reflection__ConstructorInfo__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Utils___GetConstructors_d__27();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Utils___GetConstructors_d__27", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Utils___GetConstructors_d__27(__Utils___GetConstructors_d__27&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Utils___GetConstructors_d__27", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Utils___GetConstructors_d__27(__Utils___GetConstructors_d__27 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Reflection::ConstructorInfo* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field validConstructorInputs, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
           ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>
      ___validConstructorInputs;

  /// @brief Field <>3__validConstructorInputs, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
           ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>
      _____3__validConstructorInputs;

  /// @brief Field typeInfo, offset: 0x38, size: 0x8, def value: None
  ::Amazon::Util::Internal::ITypeInfo* ___typeInfo;

  /// @brief Field <>3__typeInfo, offset: 0x40, size: 0x8, def value: None
  ::Amazon::Util::Internal::ITypeInfo* _____3__typeInfo;

  /// @brief Field <>7__wrap1, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
           ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>
      _____7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x50, size: 0x4, def value: None
  int32_t _____7__wrap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27, ___validConstructorInputs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27, _____3__validConstructorInputs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27, ___typeInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27, _____3__typeInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27, _____7__wrap1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27, _____7__wrap2) == 0x50, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Utils::<>c*
class CORDL_TYPE __Utils____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::DynamoDBv2::DataModel::__Utils____c* __9;

  static inline ::Amazon::DynamoDBv2::DataModel::__Utils____c* New_ctor();

  /// @brief Method <.cctor>b__35_0, addr 0x14341f4, size 0x58, virtual false, abstract: false, final false
  inline ::Amazon::Util::Internal::ITypeInfo* __cctor_b__35_0(::System::Type* p);

  /// @brief Method .ctor, addr 0x14341ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::DynamoDBv2::DataModel::__Utils____c* getStaticF___9();

  static inline void setStaticF___9(::Amazon::DynamoDBv2::DataModel::__Utils____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Utils____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Utils____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Utils____c(__Utils____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Utils____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Utils____c(__Utils____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::__Utils____c, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
// Type: Amazon.DynamoDBv2.DataModel::Utils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::Utils*
class CORDL_TYPE Utils : public ::System::Object {
public:
  // Declarations
  using _GetConstructors_d__27 = ::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27;

  using __c = ::Amazon::DynamoDBv2::DataModel::__Utils____c;

  using __c__DisplayClass3_0 = ::Amazon::DynamoDBv2::DataModel::__Utils____c__DisplayClass3_0;

  /// @brief Field PrimitiveTypeInfos, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PrimitiveTypeInfos,
                             put = setStaticF_PrimitiveTypeInfos))::System::Collections::Generic::HashSet_1<::Amazon::Util::Internal::ITypeInfo*>* PrimitiveTypeInfos;

  /// @brief Field PrimitiveTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PrimitiveTypes, put = setStaticF_PrimitiveTypes))::System::Collections::Generic::IEnumerable_1<::System::Type*>* PrimitiveTypes;

  /// @brief Field primitiveTypesArray, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_primitiveTypesArray, put = setStaticF_primitiveTypesArray))::ArrayW<::System::Type*, ::Array<::System::Type*>*> primitiveTypesArray;

  /// @brief Field validArrayConstructorInputs, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_validArrayConstructorInputs,
      put = setStaticF_validArrayConstructorInputs))::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                             ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*> validArrayConstructorInputs;

  /// @brief Field validConstructorInputs, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_validConstructorInputs,
               put = setStaticF_validConstructorInputs))::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                                 ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*> validConstructorInputs;

  /// @brief Field validConverterConstructorInputs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_validConverterConstructorInputs, put = setStaticF_validConverterConstructorInputs))::ArrayW<
      ::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
      ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*> validConverterConstructorInputs;

  /// @brief Method CanInstantiate, addr 0x1427dc0, size 0x60, virtual false, abstract: false, final false
  static inline bool CanInstantiate(::System::Type* objectType);

  /// @brief Method CanInstantiateArray, addr 0x1427eac, size 0x88, virtual false, abstract: false, final false
  static inline bool CanInstantiateArray(::System::Type* objectType);

  /// @brief Method CanInstantiateConverter, addr 0x142c94c, size 0x60, virtual false, abstract: false, final false
  static inline bool CanInstantiateConverter(::System::Type* objectType);

  /// @brief Method CanInstantiateHelper, addr 0x14330f8, size 0x2d8, virtual false, abstract: false, final false
  static inline bool CanInstantiateHelper(::System::Type* objectType, ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                                               ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>
                                                                          validConstructorInputs);

  /// @brief Method GetAttribute, addr 0x1432c20, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBAttribute* GetAttribute(::System::Reflection::MemberInfo* targetMemberInfo);

  /// @brief Method GetAttribute, addr 0x1432990, size 0x1b0, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBAttribute* GetAttribute(::Amazon::Util::Internal::ITypeInfo* targetTypeInfo);

  /// @brief Method GetAttributeObjects, addr 0x1432c78, size 0x110, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetAttributeObjects(::System::Reflection::MemberInfo* targetMemberInfo);

  /// @brief Method GetAttributes, addr 0x1430604, size 0x1c4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::DynamoDBAttribute*>* GetAttributes(::System::Reflection::MemberInfo* targetMemberInfo);

  /// @brief Method GetConstructors, addr 0x14333d0, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::ConstructorInfo*>*
  GetConstructors(::Amazon::Util::Internal::ITypeInfo* typeInfo, ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                                          ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>
                                                                     validConstructorInputs);

  /// @brief Method GetElementType, addr 0x1427f34, size 0x148, virtual false, abstract: false, final false
  static inline ::System::Type* GetElementType(::System::Type* collectionType);

  /// @brief Method GetPrimitiveElementType, addr 0x1431f44, size 0x100, virtual false, abstract: false, final false
  static inline ::System::Type* GetPrimitiveElementType(::System::Type* collectionType);

  /// @brief Method GetSingleDDBAttribute, addr 0x1432b40, size 0xe0, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBAttribute* GetSingleDDBAttribute(::ArrayW<::System::Object*, ::Array<::System::Object*>*> attributes);

  /// @brief Method GetTableAttribute, addr 0x1430584, size 0x80, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DataModel::DynamoDBTableAttribute* GetTableAttribute(::Amazon::Util::Internal::ITypeInfo* targetTypeInfo);

  /// @brief Method GetType, addr 0x142b71c, size 0x194, virtual false, abstract: false, final false
  static inline ::System::Type* GetType(::System::Reflection::MemberInfo* member);

  /// @brief Method ImplementsInterface, addr 0x1427a14, size 0x3ac, virtual false, abstract: false, final false
  static inline bool ImplementsInterface(::System::Type* targetType, ::System::Type* interfaceType);

  /// @brief Method Instantiate, addr 0x1427e20, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Object* Instantiate(::System::Type* objectType);

  /// @brief Method InstantiateArray, addr 0x142807c, size 0x108, virtual false, abstract: false, final false
  static inline ::System::Object* InstantiateArray(::System::Type* objectType, int32_t length);

  /// @brief Method InstantiateConverter, addr 0x14251c8, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Object* InstantiateConverter(::System::Type* objectType, ::Amazon::DynamoDBv2::DataModel::IDynamoDBContext* context);

  /// @brief Method InstantiateHelper, addr 0x1432d88, size 0x370, virtual false, abstract: false, final false
  static inline ::System::Object* InstantiateHelper(::System::Type* objectType,
                                                    ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                             ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>
                                                        validConstructorInputs,
                                                    ::ArrayW<::System::Object*, ::Array<::System::Object*>*> optionalInput);

  /// @brief Method IsPrimitive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool IsPrimitive();

  /// @brief Method IsPrimitive, addr 0x1431d10, size 0x130, virtual false, abstract: false, final false
  static inline bool IsPrimitive(::System::Type* type);

  /// @brief Method IsReadWrite, addr 0x142d184, size 0x1c8, virtual false, abstract: false, final false
  static inline bool IsReadWrite(::System::Reflection::MemberInfo* member);

  /// @brief Method ItemsToArray, addr 0x1432834, size 0x15c, virtual false, abstract: false, final false
  static inline bool ItemsToArray(::System::Type* targetType, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* items, ByRef<::System::Object*> result);

  /// @brief Method ItemsToCollection, addr 0x1432044, size 0xa4, virtual false, abstract: false, final false
  static inline bool ItemsToCollection(::System::Type* targetType, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* items, ByRef<::System::Object*> result);

  /// @brief Method ItemsToIList, addr 0x14320e8, size 0x74c, virtual false, abstract: false, final false
  static inline bool ItemsToIList(::System::Type* targetType, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* items, ByRef<::System::Object*> result);

  /// @brief Method ToLowerCamelCase, addr 0x142f050, size 0x124, virtual false, abstract: false, final false
  static inline ::StringW ToLowerCamelCase(::StringW value);

  /// @brief Method ValidatePrimitiveType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ValidatePrimitiveType();

  /// @brief Method ValidatePrimitiveType, addr 0x1431e48, size 0xfc, virtual false, abstract: false, final false
  static inline void ValidatePrimitiveType(::System::Type* type);

  /// @brief Method ValidateVersionType, addr 0x142c154, size 0x7f8, virtual false, abstract: false, final false
  static inline void ValidateVersionType(::System::Type* memberType);

  static inline ::System::Collections::Generic::HashSet_1<::Amazon::Util::Internal::ITypeInfo*>* getStaticF_PrimitiveTypeInfos();

  static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* getStaticF_PrimitiveTypes();

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF_primitiveTypesArray();

  static inline ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                         ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>
  getStaticF_validArrayConstructorInputs();

  static inline ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                         ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>
  getStaticF_validConstructorInputs();

  static inline ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                         ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>
  getStaticF_validConverterConstructorInputs();

  static inline void setStaticF_PrimitiveTypeInfos(::System::Collections::Generic::HashSet_1<::Amazon::Util::Internal::ITypeInfo*>* value);

  static inline void setStaticF_PrimitiveTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* value);

  static inline void setStaticF_primitiveTypesArray(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  static inline void setStaticF_validArrayConstructorInputs(::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                                     ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>
                                                                value);

  static inline void setStaticF_validConstructorInputs(::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                                ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>
                                                           value);

  static inline void setStaticF_validConverterConstructorInputs(::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                                         ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>
                                                                    value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Utils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Utils(Utils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Utils(Utils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::Utils, 0x10>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::Utils);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::Utils*, "Amazon.DynamoDBv2.DataModel", "Utils");
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27*, "Amazon.DynamoDBv2.DataModel", "Utils/<GetConstructors>d__27");
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::__Utils____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::__Utils____c*, "Amazon.DynamoDBv2.DataModel", "Utils/<>c");
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::__Utils____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::__Utils____c__DisplayClass3_0*, "Amazon.DynamoDBv2.DataModel", "Utils/<>c__DisplayClass3_0");

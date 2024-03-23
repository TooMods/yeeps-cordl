#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeFactory)
namespace Amazon::Util::Internal {
class ITypeInfo;
}
namespace Amazon::Util::Internal {
class __TypeFactory__AbstractTypeInfo;
}
namespace Amazon::Util::Internal {
class __TypeFactory__TypeInfoWrapper;
}
namespace GlobalNamespace {
class __TypeFactory__TypeInfoWrapper___GetMembers_Helper_d__12;
}
namespace GlobalNamespace {
class __TypeFactory__TypeInfoWrapper____c__DisplayClass12_0;
}
namespace GlobalNamespace {
class __TypeFactory__TypeInfoWrapper____c__DisplayClass4_0;
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
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System::Reflection {
class TypeInfo;
}
namespace System {
class Array;
}
namespace System {
template <typename T, typename TResult> class Func_2;
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
namespace Amazon::Util::Internal {
class TypeFactory;
}
namespace Amazon::Util::Internal {
class __TypeFactory__AbstractTypeInfo;
}
namespace Amazon::Util::Internal {
class __TypeFactory__TypeInfoWrapper;
}
namespace GlobalNamespace {
class __TypeFactory__TypeInfoWrapper___GetMembers_Helper_d__12;
}
namespace GlobalNamespace {
class __TypeFactory__TypeInfoWrapper____c__DisplayClass12_0;
}
namespace GlobalNamespace {
class __TypeFactory__TypeInfoWrapper____c__DisplayClass4_0;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::Internal::TypeFactory);
MARK_REF_PTR_T(::Amazon::Util::Internal::__TypeFactory__AbstractTypeInfo);
MARK_REF_PTR_T(::Amazon::Util::Internal::__TypeFactory__TypeInfoWrapper);
MARK_REF_PTR_T(::GlobalNamespace::__TypeFactory__TypeInfoWrapper___GetMembers_Helper_d__12);
MARK_REF_PTR_T(::GlobalNamespace::__TypeFactory__TypeInfoWrapper____c__DisplayClass12_0);
MARK_REF_PTR_T(::GlobalNamespace::__TypeFactory__TypeInfoWrapper____c__DisplayClass4_0);
// Type: ::AbstractTypeInfo
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util::Internal {
// Is value type: false
// CS Name: ::TypeFactory::AbstractTypeInfo*
class CORDL_TYPE __TypeFactory__AbstractTypeInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Assembly))::System::Reflection::Assembly* Assembly;

  __declspec(property(get = get_BaseType))::System::Type* BaseType;

  __declspec(property(get = get_ContainsGenericParameters)) bool ContainsGenericParameters;

  __declspec(property(get = get_FullName))::StringW FullName;

  __declspec(property(get = get_IsAbstract)) bool IsAbstract;

  __declspec(property(get = get_IsArray)) bool IsArray;

  __declspec(property(get = get_IsClass)) bool IsClass;

  __declspec(property(get = get_IsEnum)) bool IsEnum;

  __declspec(property(get = get_IsGenericType)) bool IsGenericType;

  __declspec(property(get = get_IsGenericTypeDefinition)) bool IsGenericTypeDefinition;

  __declspec(property(get = get_IsInterface)) bool IsInterface;

  __declspec(property(get = get_IsSealed)) bool IsSealed;

  __declspec(property(get = get_IsValueType)) bool IsValueType;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_Type))::System::Type* Type;

  /// @brief Field _type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type))::System::Type* _type;

  /// @brief Convert operator to "::Amazon::Util::Internal::ITypeInfo"
  constexpr operator ::Amazon::Util::Internal::ITypeInfo*() noexcept;

  /// @brief Method ArrayCreateInstance, addr 0x1fd8e00, size 0xc, virtual true, abstract: false, final true
  inline ::System::Array* ArrayCreateInstance(int32_t length);

  /// @brief Method CreateInstance, addr 0x1fd8df4, size 0xc, virtual true, abstract: false, final true
  inline ::System::Object* CreateInstance();

  /// @brief Method EnumGetUnderlyingType, addr 0x1fd8d64, size 0x90, virtual true, abstract: false, final true
  inline ::Amazon::Util::Internal::ITypeInfo* EnumGetUnderlyingType();

  /// @brief Method EnumToObject, addr 0x1fd8cf8, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Object* EnumToObject(::System::Object* value);

  /// @brief Method Equals, addr 0x1fd8bc8, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetConstructor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Reflection::ConstructorInfo* GetConstructor(::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*> paramTypes);

  /// @brief Method GetCustomAttributes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::Amazon::Util::Internal::ITypeInfo* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetElementType, addr 0x1fd8e0c, size 0x78, virtual true, abstract: false, final true
  inline ::Amazon::Util::Internal::ITypeInfo* GetElementType();

  /// @brief Method GetField, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Reflection::FieldInfo* GetField(::StringW name);

  /// @brief Method GetFields, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* GetFields();

  /// @brief Method GetGenericArguments, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetGenericArguments();

  /// @brief Method GetGenericTypeDefinition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* GetGenericTypeDefinition();

  /// @brief Method GetHashCode, addr 0x1fd8ba8, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetInterface, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* GetInterface(::StringW name);

  /// @brief Method GetInterfaces, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetInterfaces();

  /// @brief Method GetMembers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> GetMembers();

  /// @brief Method GetMethod, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Reflection::MethodInfo* GetMethod(::StringW name);

  /// @brief Method GetMethod, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Reflection::MethodInfo* GetMethod(::StringW name, ::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*> paramTypes);

  /// @brief Method GetProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* GetProperties();

  /// @brief Method GetProperty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Reflection::PropertyInfo* GetProperty(::StringW name);

  /// @brief Method IsAssignableFrom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsAssignableFrom(::Amazon::Util::Internal::ITypeInfo* typeInfo);

  /// @brief Method IsType, addr 0x1fd8c70, size 0x6c, virtual true, abstract: false, final true
  inline bool IsType(::System::Type* type);

  static inline ::Amazon::Util::Internal::__TypeFactory__AbstractTypeInfo* New_ctor(::System::Type* type);

  constexpr ::System::Type*& __cordl_internal_get__type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__type() const;

  constexpr void __cordl_internal_set__type(::System::Type* value);

  /// @brief Method .ctor, addr 0x1fd8b78, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method get_Assembly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Reflection::Assembly* get_Assembly();

  /// @brief Method get_BaseType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* get_BaseType();

  /// @brief Method get_ContainsGenericParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_ContainsGenericParameters();

  /// @brief Method get_FullName, addr 0x1fd8e84, size 0x24, virtual true, abstract: false, final true
  inline ::StringW get_FullName();

  /// @brief Method get_IsAbstract, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsAbstract();

  /// @brief Method get_IsArray, addr 0x1fd8cdc, size 0x1c, virtual true, abstract: false, final true
  inline bool get_IsArray();

  /// @brief Method get_IsClass, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsClass();

  /// @brief Method get_IsEnum, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsEnum();

  /// @brief Method get_IsGenericType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsGenericType();

  /// @brief Method get_IsGenericTypeDefinition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsGenericTypeDefinition();

  /// @brief Method get_IsInterface, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsInterface();

  /// @brief Method get_IsSealed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsSealed();

  /// @brief Method get_IsValueType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsValueType();

  /// @brief Method get_Name, addr 0x1fd8ea8, size 0x20, virtual true, abstract: false, final true
  inline ::StringW get_Name();

  /// @brief Method get_Type, addr 0x1fd8ba0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* get_Type();

  /// @brief Convert to "::Amazon::Util::Internal::ITypeInfo"
  constexpr ::Amazon::Util::Internal::ITypeInfo* i___Amazon__Util__Internal__ITypeInfo() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeFactory__AbstractTypeInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeFactory__AbstractTypeInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeFactory__AbstractTypeInfo(__TypeFactory__AbstractTypeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeFactory__AbstractTypeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeFactory__AbstractTypeInfo(__TypeFactory__AbstractTypeInfo const&) = delete;

  /// @brief Field _type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::Internal::__TypeFactory__AbstractTypeInfo, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::__TypeFactory__AbstractTypeInfo, ____type) == 0x10, "Offset mismatch!");

} // namespace Amazon::Util::Internal
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TypeFactory::TypeInfoWrapper::<>c__DisplayClass4_0*
class CORDL_TYPE __TypeFactory__TypeInfoWrapper____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  static inline ::GlobalNamespace::__TypeFactory__TypeInfoWrapper____c__DisplayClass4_0* New_ctor();

  /// @brief Method <GetInterface>b__0, addr 0x1fd9914, size 0x98, virtual false, abstract: false, final false
  inline bool _GetInterface_b__0(::System::Type* x);

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr void __cordl_internal_set_name(::StringW value);

  /// @brief Method .ctor, addr 0x1fd8fe0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeFactory__TypeInfoWrapper____c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeFactory__TypeInfoWrapper____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeFactory__TypeInfoWrapper____c__DisplayClass4_0(__TypeFactory__TypeInfoWrapper____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeFactory__TypeInfoWrapper____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeFactory__TypeInfoWrapper____c__DisplayClass4_0(__TypeFactory__TypeInfoWrapper____c__DisplayClass4_0 const&) = delete;

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TypeFactory__TypeInfoWrapper____c__DisplayClass4_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TypeFactory__TypeInfoWrapper____c__DisplayClass4_0, ___name) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass12_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TypeFactory::TypeInfoWrapper::<>c__DisplayClass12_0*
class CORDL_TYPE __TypeFactory__TypeInfoWrapper____c__DisplayClass12_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field processedProperties, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_processedProperties, put = __cordl_internal_set_processedProperties))::System::Collections::Generic::HashSet_1<::StringW>* processedProperties;

  static inline ::GlobalNamespace::__TypeFactory__TypeInfoWrapper____c__DisplayClass12_0* New_ctor();

  /// @brief Method <GetMembers_Helper>b__0, addr 0x1fd99b4, size 0xc0, virtual false, abstract: false, final false
  inline bool _GetMembers_Helper_b__0(::System::Reflection::MemberInfo* member);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get_processedProperties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __cordl_internal_get_processedProperties() const;

  constexpr void __cordl_internal_set_processedProperties(::System::Collections::Generic::HashSet_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x1fd99ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeFactory__TypeInfoWrapper____c__DisplayClass12_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeFactory__TypeInfoWrapper____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeFactory__TypeInfoWrapper____c__DisplayClass12_0(__TypeFactory__TypeInfoWrapper____c__DisplayClass12_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeFactory__TypeInfoWrapper____c__DisplayClass12_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeFactory__TypeInfoWrapper____c__DisplayClass12_0(__TypeFactory__TypeInfoWrapper____c__DisplayClass12_0 const&) = delete;

  /// @brief Field processedProperties, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ___processedProperties;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TypeFactory__TypeInfoWrapper____c__DisplayClass12_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TypeFactory__TypeInfoWrapper____c__DisplayClass12_0, ___processedProperties) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetMembers_Helper>d__12
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TypeFactory::TypeInfoWrapper::<GetMembers_Helper>d__12*
class CORDL_TYPE __TypeFactory__TypeInfoWrapper___GetMembers_Helper_d__12 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Reflection_MemberInfo__get_Current))::System::Reflection::
      MemberInfo* System_Collections_Generic_IEnumerator_System_Reflection_MemberInfo__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Reflection::MemberInfo* __2__current;

  /// @brief Field <>3__ti, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__ti, put = __cordl_internal_set___3__ti))::System::Reflection::TypeInfo* __3__ti;

  /// @brief Field <>7__wrap2, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap2, put = __cordl_internal_set___7__wrap2))::System::Collections::Generic::IEnumerator_1<::System::Reflection::MemberInfo*>* __7__wrap2;

  /// @brief Field <>7__wrap3, offset 0x48, size 0x18
  __declspec(property(get = __cordl_internal_get___7__wrap3, put = __cordl_internal_set___7__wrap3))::System::Collections::Generic::__List_1__Enumerator<::System::Reflection::MemberInfo*> __7__wrap3;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <alreadyProcessProperty>5__2, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__alreadyProcessProperty_5__2,
                      put = __cordl_internal_set__alreadyProcessProperty_5__2))::System::Func_2<::System::Reflection::MemberInfo*, bool>* _alreadyProcessProperty_5__2;

  /// @brief Field ti, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_ti, put = __cordl_internal_set_ti))::System::Reflection::TypeInfo* ti;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Reflection::MemberInfo*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Reflection::MemberInfo*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x1fd9aa8, size 0x608, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__TypeFactory__TypeInfoWrapper___GetMembers_Helper_d__12* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Reflection.MemberInfo>.GetEnumerator, addr 0x1fda200, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Reflection::MemberInfo*>* System_Collections_Generic_IEnumerable_System_Reflection_MemberInfo__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Reflection.MemberInfo>.get_Current, addr 0x1fda1b0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Reflection::MemberInfo* System_Collections_Generic_IEnumerator_System_Reflection_MemberInfo__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1fda2a4, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x1fda1b8, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1fda1f8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x1fd9a74, size 0x34, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Reflection::MemberInfo*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MemberInfo*> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Reflection::TypeInfo*& __cordl_internal_get___3__ti();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::TypeInfo*> const& __cordl_internal_get___3__ti() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Reflection::MemberInfo*>*& __cordl_internal_get___7__wrap2();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::System::Reflection::MemberInfo*>*> const& __cordl_internal_get___7__wrap2() const;

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::System::Reflection::MemberInfo*> const& __cordl_internal_get___7__wrap3() const;

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::System::Reflection::MemberInfo*>& __cordl_internal_get___7__wrap3();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Func_2<::System::Reflection::MemberInfo*, bool>*& __cordl_internal_get__alreadyProcessProperty_5__2();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::Reflection::MemberInfo*, bool>*> const& __cordl_internal_get__alreadyProcessProperty_5__2() const;

  constexpr ::System::Reflection::TypeInfo*& __cordl_internal_get_ti();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::TypeInfo*> const& __cordl_internal_get_ti() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Reflection::MemberInfo* value);

  constexpr void __cordl_internal_set___3__ti(::System::Reflection::TypeInfo* value);

  constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::System::Reflection::MemberInfo*>* value);

  constexpr void __cordl_internal_set___7__wrap3(::System::Collections::Generic::__List_1__Enumerator<::System::Reflection::MemberInfo*> value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__alreadyProcessProperty_5__2(::System::Func_2<::System::Reflection::MemberInfo*, bool>* value);

  constexpr void __cordl_internal_set_ti(::System::Reflection::TypeInfo* value);

  /// @brief Method <>m__Finally1, addr 0x1fda0b0, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x1fda160, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method .ctor, addr 0x1fd9218, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>* i___System__Collections__Generic__IEnumerable_1___System__Reflection__MemberInfo__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Reflection::MemberInfo*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Reflection::MemberInfo*>* i___System__Collections__Generic__IEnumerator_1___System__Reflection__MemberInfo__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeFactory__TypeInfoWrapper___GetMembers_Helper_d__12();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeFactory__TypeInfoWrapper___GetMembers_Helper_d__12", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeFactory__TypeInfoWrapper___GetMembers_Helper_d__12(__TypeFactory__TypeInfoWrapper___GetMembers_Helper_d__12&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeFactory__TypeInfoWrapper___GetMembers_Helper_d__12", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeFactory__TypeInfoWrapper___GetMembers_Helper_d__12(__TypeFactory__TypeInfoWrapper___GetMembers_Helper_d__12 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Reflection::MemberInfo* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field ti, offset: 0x28, size: 0x8, def value: None
  ::System::Reflection::TypeInfo* ___ti;

  /// @brief Field <>3__ti, offset: 0x30, size: 0x8, def value: None
  ::System::Reflection::TypeInfo* _____3__ti;

  /// @brief Field <alreadyProcessProperty>5__2, offset: 0x38, size: 0x8, def value: None
  ::System::Func_2<::System::Reflection::MemberInfo*, bool>* ____alreadyProcessProperty_5__2;

  /// @brief Field <>7__wrap2, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::System::Reflection::MemberInfo*>* _____7__wrap2;

  /// @brief Field <>7__wrap3, offset: 0x48, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::System::Reflection::MemberInfo*> _____7__wrap3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TypeFactory__TypeInfoWrapper___GetMembers_Helper_d__12, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TypeFactory__TypeInfoWrapper___GetMembers_Helper_d__12, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TypeFactory__TypeInfoWrapper___GetMembers_Helper_d__12, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TypeFactory__TypeInfoWrapper___GetMembers_Helper_d__12, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TypeFactory__TypeInfoWrapper___GetMembers_Helper_d__12, ___ti) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TypeFactory__TypeInfoWrapper___GetMembers_Helper_d__12, _____3__ti) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TypeFactory__TypeInfoWrapper___GetMembers_Helper_d__12, ____alreadyProcessProperty_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TypeFactory__TypeInfoWrapper___GetMembers_Helper_d__12, _____7__wrap2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TypeFactory__TypeInfoWrapper___GetMembers_Helper_d__12, _____7__wrap3) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TypeInfoWrapper
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util::Internal {
// Is value type: false
// CS Name: ::TypeFactory::TypeInfoWrapper*
class CORDL_TYPE __TypeFactory__TypeInfoWrapper : public ::Amazon::Util::Internal::__TypeFactory__AbstractTypeInfo {
public:
  // Declarations
  using _GetMembers_Helper_d__12 = ::GlobalNamespace::__TypeFactory__TypeInfoWrapper___GetMembers_Helper_d__12;

  using __c__DisplayClass12_0 = ::GlobalNamespace::__TypeFactory__TypeInfoWrapper____c__DisplayClass12_0;

  using __c__DisplayClass4_0 = ::GlobalNamespace::__TypeFactory__TypeInfoWrapper____c__DisplayClass4_0;

  __declspec(property(get = get_Assembly))::System::Reflection::Assembly* Assembly;

  __declspec(property(get = get_BaseType))::System::Type* BaseType;

  __declspec(property(get = get_ContainsGenericParameters)) bool ContainsGenericParameters;

  __declspec(property(get = get_IsAbstract)) bool IsAbstract;

  __declspec(property(get = get_IsClass)) bool IsClass;

  __declspec(property(get = get_IsEnum)) bool IsEnum;

  __declspec(property(get = get_IsGenericType)) bool IsGenericType;

  __declspec(property(get = get_IsGenericTypeDefinition)) bool IsGenericTypeDefinition;

  __declspec(property(get = get_IsInterface)) bool IsInterface;

  __declspec(property(get = get_IsSealed)) bool IsSealed;

  __declspec(property(get = get_IsValueType)) bool IsValueType;

  /// @brief Field _typeInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__typeInfo, put = __cordl_internal_set__typeInfo))::System::Reflection::TypeInfo* _typeInfo;

  /// @brief Field objectType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_objectType, put = setStaticF_objectType))::System::Type* objectType;

  /// @brief Method GetConstructor, addr 0x1fd9744, size 0x140, virtual true, abstract: false, final false
  inline ::System::Reflection::ConstructorInfo* GetConstructor(::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*> paramTypes);

  /// @brief Method GetCustomAttributes, addr 0x1fd9630, size 0xf0, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::Amazon::Util::Internal::ITypeInfo* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x1fd95c8, size 0x68, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetField, addr 0x1fd9080, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Reflection::FieldInfo* GetField(::StringW name);

  /// @brief Method GetFields, addr 0x1fd9064, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* GetFields();

  /// @brief Method GetGenericArguments, addr 0x1fd93a8, size 0x24, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetGenericArguments();

  /// @brief Method GetGenericTypeDefinition, addr 0x1fd9384, size 0x24, virtual true, abstract: false, final false
  inline ::System::Type* GetGenericTypeDefinition();

  /// @brief Method GetInterface, addr 0x1fd8eec, size 0xf4, virtual true, abstract: false, final false
  inline ::System::Type* GetInterface(::StringW name);

  /// @brief Method GetInterfaces, addr 0x1fd8fe8, size 0x60, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetInterfaces();

  /// @brief Method GetMembers, addr 0x1fd909c, size 0x90, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> GetMembers();

  /// @brief Method GetMembers_Helper, addr 0x1fd912c, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>* GetMembers_Helper(::System::Reflection::TypeInfo* ti);

  /// @brief Method GetMethod, addr 0x1fd92fc, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetMethod(::StringW name);

  /// @brief Method GetMethod, addr 0x1fd93cc, size 0x148, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetMethod(::StringW name, ::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*> paramTypes);

  /// @brief Method GetProperties, addr 0x1fd9048, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* GetProperties();

  /// @brief Method GetProperty, addr 0x1fd9514, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Reflection::PropertyInfo* GetProperty(::StringW name);

  /// @brief Method IsAssignableFrom, addr 0x1fd9530, size 0x98, virtual true, abstract: false, final false
  inline bool IsAssignableFrom(::Amazon::Util::Internal::ITypeInfo* typeInfo);

  /// @brief Method IsBackingField, addr 0x1fd91a4, size 0x74, virtual false, abstract: false, final false
  static inline bool IsBackingField(::System::Reflection::MemberInfo* mi);

  static inline ::Amazon::Util::Internal::__TypeFactory__TypeInfoWrapper* New_ctor(::System::Type* type);

  constexpr ::System::Reflection::TypeInfo*& __cordl_internal_get__typeInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::TypeInfo*> const& __cordl_internal_get__typeInfo() const;

  constexpr void __cordl_internal_set__typeInfo(::System::Reflection::TypeInfo* value);

  /// @brief Method .ctor, addr 0x1fd8ad8, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  static inline ::System::Type* getStaticF_objectType();

  /// @brief Method get_Assembly, addr 0x1fd9720, size 0x24, virtual true, abstract: false, final false
  inline ::System::Reflection::Assembly* get_Assembly();

  /// @brief Method get_BaseType, addr 0x1fd8ec8, size 0x24, virtual true, abstract: false, final false
  inline ::System::Type* get_BaseType();

  /// @brief Method get_ContainsGenericParameters, addr 0x1fd9318, size 0x24, virtual true, abstract: false, final false
  inline bool get_ContainsGenericParameters();

  /// @brief Method get_IsAbstract, addr 0x1fd92a0, size 0x1c, virtual true, abstract: false, final false
  inline bool get_IsAbstract();

  /// @brief Method get_IsClass, addr 0x1fd924c, size 0x1c, virtual true, abstract: false, final false
  inline bool get_IsClass();

  /// @brief Method get_IsEnum, addr 0x1fd92d8, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsEnum();

  /// @brief Method get_IsGenericType, addr 0x1fd9360, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsGenericType();

  /// @brief Method get_IsGenericTypeDefinition, addr 0x1fd933c, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsGenericTypeDefinition();

  /// @brief Method get_IsInterface, addr 0x1fd9284, size 0x1c, virtual true, abstract: false, final false
  inline bool get_IsInterface();

  /// @brief Method get_IsSealed, addr 0x1fd92bc, size 0x1c, virtual true, abstract: false, final false
  inline bool get_IsSealed();

  /// @brief Method get_IsValueType, addr 0x1fd9268, size 0x1c, virtual true, abstract: false, final false
  inline bool get_IsValueType();

  static inline void setStaticF_objectType(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeFactory__TypeInfoWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeFactory__TypeInfoWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeFactory__TypeInfoWrapper(__TypeFactory__TypeInfoWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeFactory__TypeInfoWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeFactory__TypeInfoWrapper(__TypeFactory__TypeInfoWrapper const&) = delete;

  /// @brief Field _typeInfo, offset: 0x18, size: 0x8, def value: None
  ::System::Reflection::TypeInfo* ____typeInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::Internal::__TypeFactory__TypeInfoWrapper, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::__TypeFactory__TypeInfoWrapper, ____typeInfo) == 0x18, "Offset mismatch!");

} // namespace Amazon::Util::Internal
// Type: Amazon.Util.Internal::TypeFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Util::Internal {
// Is value type: false
// CS Name: ::Amazon.Util.Internal::TypeFactory*
class CORDL_TYPE TypeFactory : public ::System::Object {
public:
  // Declarations
  using AbstractTypeInfo = ::Amazon::Util::Internal::__TypeFactory__AbstractTypeInfo;

  using TypeInfoWrapper = ::Amazon::Util::Internal::__TypeFactory__TypeInfoWrapper;

  /// @brief Field EmptyTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EmptyTypes, put = setStaticF_EmptyTypes))::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*> EmptyTypes;

  /// @brief Method GetTypeInfo, addr 0x1fd8a28, size 0xb0, virtual false, abstract: false, final false
  static inline ::Amazon::Util::Internal::ITypeInfo* GetTypeInfo(::System::Type* type);

  static inline ::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*> getStaticF_EmptyTypes();

  static inline void setStaticF_EmptyTypes(::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeFactory(TypeFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeFactory(TypeFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::Internal::TypeFactory, 0x10>, "Size mismatch!");

} // namespace Amazon::Util::Internal
NEED_NO_BOX(::Amazon::Util::Internal::TypeFactory);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::TypeFactory*, "Amazon.Util.Internal", "TypeFactory");
NEED_NO_BOX(::Amazon::Util::Internal::__TypeFactory__AbstractTypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::__TypeFactory__AbstractTypeInfo*, "Amazon.Util.Internal", "TypeFactory/AbstractTypeInfo");
NEED_NO_BOX(::Amazon::Util::Internal::__TypeFactory__TypeInfoWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::__TypeFactory__TypeInfoWrapper*, "Amazon.Util.Internal", "TypeFactory/TypeInfoWrapper");
NEED_NO_BOX(::GlobalNamespace::__TypeFactory__TypeInfoWrapper___GetMembers_Helper_d__12);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TypeFactory__TypeInfoWrapper___GetMembers_Helper_d__12*, "Amazon.Util.Internal", "TypeFactory/TypeInfoWrapper/<GetMembers_Helper>d__12");
NEED_NO_BOX(::GlobalNamespace::__TypeFactory__TypeInfoWrapper____c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TypeFactory__TypeInfoWrapper____c__DisplayClass12_0*, "Amazon.Util.Internal", "TypeFactory/TypeInfoWrapper/<>c__DisplayClass12_0");
NEED_NO_BOX(::GlobalNamespace::__TypeFactory__TypeInfoWrapper____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TypeFactory__TypeInfoWrapper____c__DisplayClass4_0*, "Amazon.Util.Internal", "TypeFactory/TypeInfoWrapper/<>c__DisplayClass4_0");

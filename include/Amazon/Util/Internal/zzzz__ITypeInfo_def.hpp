#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ITypeInfo)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
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
namespace System {
class Array;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::Util::Internal {
class ITypeInfo;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::Internal::ITypeInfo);
// Type: Amazon.Util.Internal::ITypeInfo
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Util::Internal {
// Is value type: false
// CS Name: ::Amazon.Util.Internal::ITypeInfo*
class CORDL_TYPE ITypeInfo {
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

  /// @brief Method ArrayCreateInstance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Array* ArrayCreateInstance(int32_t length);

  /// @brief Method CreateInstance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* CreateInstance();

  /// @brief Method EnumGetUnderlyingType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Util::Internal::ITypeInfo* EnumGetUnderlyingType();

  /// @brief Method EnumToObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* EnumToObject(::System::Object* value);

  /// @brief Method GetConstructor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Reflection::ConstructorInfo* GetConstructor(::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*> paramTypes);

  /// @brief Method GetCustomAttributes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::Amazon::Util::Internal::ITypeInfo* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetElementType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Util::Internal::ITypeInfo* GetElementType();

  /// @brief Method GetField, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Reflection::FieldInfo* GetField(::StringW name);

  /// @brief Method GetFields, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* GetFields();

  /// @brief Method GetGenericArguments, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetGenericArguments();

  /// @brief Method GetGenericTypeDefinition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* GetGenericTypeDefinition();

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

  /// @brief Method IsType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsType(::System::Type* type);

  /// @brief Method get_Assembly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Reflection::Assembly* get_Assembly();

  /// @brief Method get_BaseType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* get_BaseType();

  /// @brief Method get_ContainsGenericParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_ContainsGenericParameters();

  /// @brief Method get_FullName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_FullName();

  /// @brief Method get_IsAbstract, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsAbstract();

  /// @brief Method get_IsArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
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

  /// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Name();

  /// @brief Method get_Type, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* get_Type();

  // Ctor Parameters [CppParam { name: "", ty: "ITypeInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITypeInfo(ITypeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITypeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITypeInfo(ITypeInfo const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Util::Internal
NEED_NO_BOX(::Amazon::Util::Internal::ITypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::ITypeInfo*, "Amazon.Util.Internal", "ITypeInfo");

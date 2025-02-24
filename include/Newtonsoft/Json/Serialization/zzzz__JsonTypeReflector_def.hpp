#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(JsonTypeReflector)
namespace Newtonsoft::Json::Serialization {
class NamingStrategy;
}
namespace Newtonsoft::Json::Serialization {
class __JsonTypeReflector____c;
}
namespace Newtonsoft::Json::Serialization {
class __JsonTypeReflector____c__DisplayClass22_0;
}
namespace Newtonsoft::Json::Utilities {
class ReflectionDelegateFactory;
}
namespace Newtonsoft::Json::Utilities {
class ReflectionObject;
}
namespace Newtonsoft::Json::Utilities {
template <typename TKey, typename TValue> class ThreadSafeStore_2;
}
namespace Newtonsoft::Json {
class JsonContainerAttribute;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
struct MemberSerialization;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Runtime::Serialization {
class DataContractAttribute;
}
namespace System::Runtime::Serialization {
class DataMemberAttribute;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonTypeReflector;
}
namespace Newtonsoft::Json::Serialization {
class __JsonTypeReflector____c;
}
namespace Newtonsoft::Json::Serialization {
class __JsonTypeReflector____c__DisplayClass22_0;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonTypeReflector);
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::__JsonTypeReflector____c);
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass22_0);
// Type: ::<>c__DisplayClass22_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::JsonTypeReflector::<>c__DisplayClass22_0*
class CORDL_TYPE __JsonTypeReflector____c__DisplayClass22_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field defaultConstructor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultConstructor, put = __cordl_internal_set_defaultConstructor))::System::Func_1<::System::Object*>* defaultConstructor;

  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::System::Type* type;

  static inline ::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass22_0* New_ctor();

  /// @brief Method <GetCreator>b__0, addr 0x1090de4, size 0x458, virtual false, abstract: false, final false
  inline ::System::Object* _GetCreator_b__0(::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters);

  constexpr ::System::Func_1<::System::Object*>*& __cordl_internal_get_defaultConstructor();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::System::Object*>*> const& __cordl_internal_get_defaultConstructor() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_type() const;

  constexpr void __cordl_internal_set_defaultConstructor(::System::Func_1<::System::Object*>* value);

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x10907a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonTypeReflector____c__DisplayClass22_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__JsonTypeReflector____c__DisplayClass22_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JsonTypeReflector____c__DisplayClass22_0(__JsonTypeReflector____c__DisplayClass22_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JsonTypeReflector____c__DisplayClass22_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JsonTypeReflector____c__DisplayClass22_0(__JsonTypeReflector____c__DisplayClass22_0 const&) = delete;

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  /// @brief Field defaultConstructor, offset: 0x18, size: 0x8, def value: None
  ::System::Func_1<::System::Object*>* ___defaultConstructor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass22_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass22_0, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass22_0, ___defaultConstructor) == 0x18, "Offset mismatch!");

} // namespace Newtonsoft::Json::Serialization
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::JsonTypeReflector::<>c*
class CORDL_TYPE __JsonTypeReflector____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Newtonsoft::Json::Serialization::__JsonTypeReflector____c* __9;

  /// @brief Field <>9__22_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__22_1, put = setStaticF___9__22_1))::System::Func_2<::System::Object*, ::System::Type*>* __9__22_1;

  static inline ::Newtonsoft::Json::Serialization::__JsonTypeReflector____c* New_ctor();

  /// @brief Method <GetCreator>b__22_1, addr 0x10912a8, size 0x60, virtual false, abstract: false, final false
  inline ::System::Type* _GetCreator_b__22_1(::System::Object* param);

  /// @brief Method .ctor, addr 0x10912a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Serialization::__JsonTypeReflector____c* getStaticF___9();

  static inline ::System::Func_2<::System::Object*, ::System::Type*>* getStaticF___9__22_1();

  static inline void setStaticF___9(::Newtonsoft::Json::Serialization::__JsonTypeReflector____c* value);

  static inline void setStaticF___9__22_1(::System::Func_2<::System::Object*, ::System::Type*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonTypeReflector____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__JsonTypeReflector____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JsonTypeReflector____c(__JsonTypeReflector____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JsonTypeReflector____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JsonTypeReflector____c(__JsonTypeReflector____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::__JsonTypeReflector____c, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
// Type: Newtonsoft.Json.Serialization::JsonTypeReflector
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Serialization::JsonTypeReflector*
class CORDL_TYPE JsonTypeReflector : public ::System::Object {
public:
  // Declarations
  using __c = ::Newtonsoft::Json::Serialization::__JsonTypeReflector____c;

  using __c__DisplayClass22_0 = ::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass22_0;

  /// @brief Field AssociatedMetadataTypesCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AssociatedMetadataTypesCache,
                             put = setStaticF_AssociatedMetadataTypesCache))::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>* AssociatedMetadataTypesCache;

  /// @brief Field CreatorCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreatorCache, put = setStaticF_CreatorCache))::Newtonsoft::Json::Utilities::ThreadSafeStore_2<
      ::System::Type*, ::System::Func_2<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::System::Object*>*>* CreatorCache;

  /// @brief Field _dynamicCodeGeneration, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF__dynamicCodeGeneration, put = setStaticF__dynamicCodeGeneration))::System::Nullable_1<bool> _dynamicCodeGeneration;

  /// @brief Field _fullyTrusted, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF__fullyTrusted, put = setStaticF__fullyTrusted))::System::Nullable_1<bool> _fullyTrusted;

  /// @brief Field _metadataTypeAttributeReflectionObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__metadataTypeAttributeReflectionObject,
                             put = setStaticF__metadataTypeAttributeReflectionObject))::Newtonsoft::Json::Utilities::ReflectionObject* _metadataTypeAttributeReflectionObject;

  /// @brief Method CanTypeDescriptorConvertString, addr 0x108d384, size 0x1ec, virtual false, abstract: false, final false
  static inline bool CanTypeDescriptorConvertString(::System::Type* type, ByRef<::System::ComponentModel::TypeConverter*> typeConverter);

  /// @brief Method CreateJsonConverterInstance, addr 0x1090394, size 0xf4, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::JsonConverter* CreateJsonConverterInstance(::System::Type* converterType, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method CreateNamingStrategyInstance, addr 0x1090488, size 0xf4, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Serialization::NamingStrategy* CreateNamingStrategyInstance(::System::Type* namingStrategyType, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method GetAssociateMetadataTypeFromAttribute, addr 0x10908b0, size 0x268, virtual false, abstract: false, final false
  static inline ::System::Type* GetAssociateMetadataTypeFromAttribute(::System::Type* type);

  /// @brief Method GetAssociatedMetadataType, addr 0x1090830, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Type* GetAssociatedMetadataType(::System::Type* type);

  /// @brief Method GetAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetAttribute(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method GetAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetAttribute(::System::Object* provider);

  /// @brief Method GetAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetAttribute(::System::Type* type);

  /// @brief Method GetCachedAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetCachedAttribute(::System::Object* attributeProvider);

  /// @brief Method GetContainerNamingStrategy, addr 0x109057c, size 0xb8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Serialization::NamingStrategy* GetContainerNamingStrategy(::Newtonsoft::Json::JsonContainerAttribute* containerAttribute);

  /// @brief Method GetCreator, addr 0x1090634, size 0x16c, virtual false, abstract: false, final false
  static inline ::System::Func_2<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::System::Object*>* GetCreator(::System::Type* type);

  /// @brief Method GetDataContractAttribute, addr 0x108fdd0, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContractAttribute* GetDataContractAttribute(::System::Type* type);

  /// @brief Method GetDataMemberAttribute, addr 0x108fe9c, size 0x284, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataMemberAttribute* GetDataMemberAttribute(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method GetJsonConverter, addr 0x1090274, size 0x120, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::JsonConverter* GetJsonConverter(::System::Object* attributeProvider);

  /// @brief Method GetObjectMemberSerialization, addr 0x1090120, size 0xd8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::MemberSerialization GetObjectMemberSerialization(::System::Type* objectType, bool ignoreSerializableAttribute);

  /// @brief Method IsNonSerializable, addr 0x1090b18, size 0x7c, virtual false, abstract: false, final false
  static inline bool IsNonSerializable(::System::Object* provider);

  /// @brief Method IsSerializable, addr 0x10901f8, size 0x7c, virtual false, abstract: false, final false
  static inline bool IsSerializable(::System::Object* provider);

  static inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>* getStaticF_AssociatedMetadataTypesCache();

  static inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Func_2<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::System::Object*>*>*
  getStaticF_CreatorCache();

  static inline ::System::Nullable_1<bool> getStaticF__dynamicCodeGeneration();

  static inline ::System::Nullable_1<bool> getStaticF__fullyTrusted();

  static inline ::Newtonsoft::Json::Utilities::ReflectionObject* getStaticF__metadataTypeAttributeReflectionObject();

  /// @brief Method get_DynamicCodeGeneration, addr 0x1090b94, size 0xd8, virtual false, abstract: false, final false
  static inline bool get_DynamicCodeGeneration();

  /// @brief Method get_FullyTrusted, addr 0x108f1e4, size 0x114, virtual false, abstract: false, final false
  static inline bool get_FullyTrusted();

  /// @brief Method get_ReflectionDelegateFactory, addr 0x10907a8, size 0x88, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::ReflectionDelegateFactory* get_ReflectionDelegateFactory();

  static inline void setStaticF_AssociatedMetadataTypesCache(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Type*>* value);

  static inline void
  setStaticF_CreatorCache(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::System::Func_2<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::System::Object*>*>* value);

  static inline void setStaticF__dynamicCodeGeneration(::System::Nullable_1<bool> value);

  static inline void setStaticF__fullyTrusted(::System::Nullable_1<bool> value);

  static inline void setStaticF__metadataTypeAttributeReflectionObject(::Newtonsoft::Json::Utilities::ReflectionObject* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTypeReflector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonTypeReflector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonTypeReflector(JsonTypeReflector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonTypeReflector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonTypeReflector(JsonTypeReflector const&) = delete;

  /// @brief Field ArrayValuesPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString ArrayValuesPropertyName{ u"$values" };

  /// @brief Field ConcurrentDictionaryTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString ConcurrentDictionaryTypeName{ u"System.Collections.Concurrent.ConcurrentDictionary`2" };

  /// @brief Field IdPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString IdPropertyName{ u"$id" };

  /// @brief Field RefPropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString RefPropertyName{ u"$ref" };

  /// @brief Field ShouldSerializePrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString ShouldSerializePrefix{ u"ShouldSerialize" };

  /// @brief Field SpecifiedPostfix offset 0xffffffff size 0x8
  static constexpr ::ConstString SpecifiedPostfix{ u"Specified" };

  /// @brief Field TypePropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString TypePropertyName{ u"$type" };

  /// @brief Field ValuePropertyName offset 0xffffffff size 0x8
  static constexpr ::ConstString ValuePropertyName{ u"$value" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonTypeReflector, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonTypeReflector);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonTypeReflector*, "Newtonsoft.Json.Serialization", "JsonTypeReflector");
NEED_NO_BOX(::Newtonsoft::Json::Serialization::__JsonTypeReflector____c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::__JsonTypeReflector____c*, "Newtonsoft.Json.Serialization", "JsonTypeReflector/<>c");
NEED_NO_BOX(::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass22_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::__JsonTypeReflector____c__DisplayClass22_0*, "Newtonsoft.Json.Serialization", "JsonTypeReflector/<>c__DisplayClass22_0");

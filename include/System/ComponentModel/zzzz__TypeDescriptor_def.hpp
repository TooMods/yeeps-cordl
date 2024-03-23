#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__CustomTypeDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TypeDescriptor)
namespace GlobalNamespace {
class __TypeDescriptor__AttributeProvider__AttributeTypeDescriptor;
}
namespace GlobalNamespace {
class __TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor;
}
namespace GlobalNamespace {
struct __TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor;
}
namespace GlobalNamespace {
struct __TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
namespace System::ComponentModel::Design {
class IDesigner;
}
namespace System::ComponentModel::Design {
class ITypeDescriptorFilterService;
}
namespace System::ComponentModel {
class AttributeCollection;
}
namespace System::ComponentModel {
class EventDescriptorCollection;
}
namespace System::ComponentModel {
class EventDescriptor;
}
namespace System::ComponentModel {
class IComNativeDescriptorHandler;
}
namespace System::ComponentModel {
class IComponent;
}
namespace System::ComponentModel {
class ICustomTypeDescriptor;
}
namespace System::ComponentModel {
class IExtenderProvider;
}
namespace System::ComponentModel {
class MemberDescriptor;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::ComponentModel {
class RefreshEventHandler;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace System::ComponentModel {
class TypeDescriptionProvider;
}
namespace System::ComponentModel {
class WeakHashtable;
}
namespace System::ComponentModel {
class __TypeDescriptor__AttributeFilterCacheItem;
}
namespace System::ComponentModel {
class __TypeDescriptor__AttributeProvider;
}
namespace System::ComponentModel {
class __TypeDescriptor__ComNativeDescriptionProvider;
}
namespace System::ComponentModel {
class __TypeDescriptor__FilterCacheItem;
}
namespace System::ComponentModel {
class __TypeDescriptor__IUnimplemented;
}
namespace System::ComponentModel {
class __TypeDescriptor__MemberDescriptorComparer;
}
namespace System::ComponentModel {
class __TypeDescriptor__MergedTypeDescriptor;
}
namespace System::ComponentModel {
class __TypeDescriptor__TypeDescriptionNode;
}
namespace System::ComponentModel {
class __TypeDescriptor__TypeDescriptorComObject;
}
namespace System::ComponentModel {
class __TypeDescriptor__TypeDescriptorInterface;
}
namespace System::Diagnostics {
class BooleanSwitch;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class Module;
}
namespace System {
class Attribute;
}
namespace System {
struct Guid;
}
namespace System {
class IServiceProvider;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class __TypeDescriptor__AttributeProvider__AttributeTypeDescriptor;
}
namespace GlobalNamespace {
class __TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor;
}
namespace System::ComponentModel {
class TypeDescriptor;
}
namespace System::ComponentModel {
class __TypeDescriptor__AttributeFilterCacheItem;
}
namespace System::ComponentModel {
class __TypeDescriptor__AttributeProvider;
}
namespace System::ComponentModel {
class __TypeDescriptor__ComNativeDescriptionProvider;
}
namespace System::ComponentModel {
class __TypeDescriptor__FilterCacheItem;
}
namespace System::ComponentModel {
class __TypeDescriptor__IUnimplemented;
}
namespace System::ComponentModel {
class __TypeDescriptor__MemberDescriptorComparer;
}
namespace System::ComponentModel {
class __TypeDescriptor__MergedTypeDescriptor;
}
namespace System::ComponentModel {
class __TypeDescriptor__TypeDescriptionNode;
}
namespace System::ComponentModel {
class __TypeDescriptor__TypeDescriptorComObject;
}
namespace System::ComponentModel {
class __TypeDescriptor__TypeDescriptorInterface;
}
namespace GlobalNamespace {
struct __TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor;
}
namespace GlobalNamespace {
struct __TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor);
MARK_REF_PTR_T(::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor);
MARK_REF_PTR_T(::System::ComponentModel::TypeDescriptor);
MARK_REF_PTR_T(::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem);
MARK_REF_PTR_T(::System::ComponentModel::__TypeDescriptor__AttributeProvider);
MARK_REF_PTR_T(::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider);
MARK_REF_PTR_T(::System::ComponentModel::__TypeDescriptor__FilterCacheItem);
MARK_REF_PTR_T(::System::ComponentModel::__TypeDescriptor__IUnimplemented);
MARK_REF_PTR_T(::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer);
MARK_REF_PTR_T(::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor);
MARK_REF_PTR_T(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode);
MARK_REF_PTR_T(::System::ComponentModel::__TypeDescriptor__TypeDescriptorComObject);
MARK_REF_PTR_T(::System::ComponentModel::__TypeDescriptor__TypeDescriptorInterface);
MARK_VAL_T(::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor);
MARK_VAL_T(::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor);
// Type: ::AttributeTypeDescriptor
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TypeDescriptor::AttributeProvider::AttributeTypeDescriptor*
class CORDL_TYPE __TypeDescriptor__AttributeProvider__AttributeTypeDescriptor : public ::System::ComponentModel::CustomTypeDescriptor {
public:
  // Declarations
  /// @brief Field _attributeArray, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__attributeArray, put = __cordl_internal_set__attributeArray))::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> _attributeArray;

  /// @brief Method GetAttributes, addr 0x18e2b98, size 0x290, virtual true, abstract: false, final false
  inline ::System::ComponentModel::AttributeCollection* GetAttributes();

  static inline ::GlobalNamespace::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor* New_ctor(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attrs,
                                                                                                          ::System::ComponentModel::ICustomTypeDescriptor* parent);

  constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> const& __cordl_internal_get__attributeArray() const;

  constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>& __cordl_internal_get__attributeArray();

  constexpr void __cordl_internal_set__attributeArray(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> value);

  /// @brief Method .ctor, addr 0x18e2b6c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attrs, ::System::ComponentModel::ICustomTypeDescriptor* parent);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__AttributeProvider__AttributeTypeDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptor__AttributeProvider__AttributeTypeDescriptor(__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptor__AttributeProvider__AttributeTypeDescriptor(__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor const&) = delete;

  /// @brief Field _attributeArray, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> ____attributeArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor, ____attributeArray) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AttributeProvider
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::TypeDescriptor::AttributeProvider*
class CORDL_TYPE __TypeDescriptor__AttributeProvider : public ::System::ComponentModel::TypeDescriptionProvider {
public:
  // Declarations
  using AttributeTypeDescriptor = ::GlobalNamespace::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor;

  /// @brief Field _attrs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__attrs, put = __cordl_internal_set__attrs))::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> _attrs;

  /// @brief Method GetTypeDescriptor, addr 0x18e2ad4, size 0x98, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance);

  static inline ::System::ComponentModel::__TypeDescriptor__AttributeProvider* New_ctor(::System::ComponentModel::TypeDescriptionProvider* existingProvider,
                                                                                        ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attrs);

  constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> const& __cordl_internal_get__attrs() const;

  constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>& __cordl_internal_get__attrs();

  constexpr void __cordl_internal_set__attrs(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> value);

  /// @brief Method .ctor, addr 0x18d6598, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::TypeDescriptionProvider* existingProvider, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attrs);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__AttributeProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__AttributeProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptor__AttributeProvider(__TypeDescriptor__AttributeProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__AttributeProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptor__AttributeProvider(__TypeDescriptor__AttributeProvider const&) = delete;

  /// @brief Field _attrs, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> ____attrs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeDescriptor__AttributeProvider, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeDescriptor__AttributeProvider, ____attrs) == 0x20, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: ::ComNativeTypeDescriptor
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TypeDescriptor::ComNativeDescriptionProvider::ComNativeTypeDescriptor*
class CORDL_TYPE __TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor : public ::System::Object {
public:
  // Declarations
  /// @brief Field _handler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__handler, put = __cordl_internal_set__handler))::System::ComponentModel::IComNativeDescriptorHandler* _handler;

  /// @brief Field _instance, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__instance, put = __cordl_internal_set__instance))::System::Object* _instance;

  /// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr operator ::System::ComponentModel::ICustomTypeDescriptor*() noexcept;

  static inline ::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor* New_ctor(::System::ComponentModel::IComNativeDescriptorHandler* handler,
                                                                                                                     ::System::Object* instance);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetAttributes, addr 0x18e2fc4, size 0xa8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetClassName, addr 0x18e306c, size 0xac, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetComponentName, addr 0x18e3118, size 0x8, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetConverter, addr 0x18e3120, size 0xac, virtual true, abstract: false, final true
  inline ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent, addr 0x18e31cc, size 0xac, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty, addr 0x18e3278, size 0xac, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEditor, addr 0x18e3324, size 0xb4, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x18e33d8, size 0xac, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x18e3484, size 0xb4, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x18e3538, size 0xb0, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x18e35e8, size 0xb4, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner, addr 0x18e369c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd);

  constexpr ::System::ComponentModel::IComNativeDescriptorHandler*& __cordl_internal_get__handler();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::IComNativeDescriptorHandler*> const& __cordl_internal_get__handler() const;

  constexpr ::System::Object*& __cordl_internal_get__instance();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__instance() const;

  constexpr void __cordl_internal_set__handler(::System::ComponentModel::IComNativeDescriptorHandler* value);

  constexpr void __cordl_internal_set__instance(::System::Object* value);

  /// @brief Method .ctor, addr 0x18e2f98, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::IComNativeDescriptorHandler* handler, ::System::Object* instance);

  /// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr ::System::ComponentModel::ICustomTypeDescriptor* i___System__ComponentModel__ICustomTypeDescriptor() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor(__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor(__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor const&) = delete;

  /// @brief Field _handler, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::IComNativeDescriptorHandler* ____handler;

  /// @brief Field _instance, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____instance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor, ____handler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor, ____instance) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ComNativeDescriptionProvider
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::TypeDescriptor::ComNativeDescriptionProvider*
class CORDL_TYPE __TypeDescriptor__ComNativeDescriptionProvider : public ::System::ComponentModel::TypeDescriptionProvider {
public:
  // Declarations
  using ComNativeTypeDescriptor = ::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor;

  __declspec(property(get = get_Handler, put = set_Handler))::System::ComponentModel::IComNativeDescriptorHandler* Handler;

  /// @brief Field _handler, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__handler, put = __cordl_internal_set__handler))::System::ComponentModel::IComNativeDescriptorHandler* _handler;

  /// @brief Method GetTypeDescriptor, addr 0x18e2e38, size 0x160, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance);

  static inline ::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider* New_ctor(::System::ComponentModel::IComNativeDescriptorHandler* handler);

  constexpr ::System::ComponentModel::IComNativeDescriptorHandler*& __cordl_internal_get__handler();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::IComNativeDescriptorHandler*> const& __cordl_internal_get__handler() const;

  constexpr void __cordl_internal_set__handler(::System::ComponentModel::IComNativeDescriptorHandler* value);

  /// @brief Method .ctor, addr 0x18d5e34, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::IComNativeDescriptorHandler* handler);

  /// @brief Method get_Handler, addr 0x18e2e28, size 0x8, virtual false, abstract: false, final false
  inline ::System::ComponentModel::IComNativeDescriptorHandler* get_Handler();

  /// @brief Method set_Handler, addr 0x18e2e30, size 0x8, virtual false, abstract: false, final false
  inline void set_Handler(::System::ComponentModel::IComNativeDescriptorHandler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__ComNativeDescriptionProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__ComNativeDescriptionProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptor__ComNativeDescriptionProvider(__TypeDescriptor__ComNativeDescriptionProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__ComNativeDescriptionProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptor__ComNativeDescriptionProvider(__TypeDescriptor__ComNativeDescriptionProvider const&) = delete;

  /// @brief Field _handler, offset: 0x20, size: 0x8, def value: None
  ::System::ComponentModel::IComNativeDescriptorHandler* ____handler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider, ____handler) == 0x20, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: ::AttributeFilterCacheItem
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::TypeDescriptor::AttributeFilterCacheItem*
class CORDL_TYPE __TypeDescriptor__AttributeFilterCacheItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field FilteredMembers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_FilteredMembers, put = __cordl_internal_set_FilteredMembers))::System::Collections::ICollection* FilteredMembers;

  /// @brief Field _filter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__filter, put = __cordl_internal_set__filter))::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> _filter;

  /// @brief Method IsValid, addr 0x18e0fe0, size 0x78, virtual false, abstract: false, final false
  inline bool IsValid(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter);

  static inline ::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem* New_ctor(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter,
                                                                                               ::System::Collections::ICollection* filteredMembers);

  constexpr ::System::Collections::ICollection*& __cordl_internal_get_FilteredMembers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ICollection*> const& __cordl_internal_get_FilteredMembers() const;

  constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> const& __cordl_internal_get__filter() const;

  constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>& __cordl_internal_get__filter();

  constexpr void __cordl_internal_set_FilteredMembers(::System::Collections::ICollection* value);

  constexpr void __cordl_internal_set__filter(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> value);

  /// @brief Method .ctor, addr 0x18e1058, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter, ::System::Collections::ICollection* filteredMembers);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__AttributeFilterCacheItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__AttributeFilterCacheItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptor__AttributeFilterCacheItem(__TypeDescriptor__AttributeFilterCacheItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__AttributeFilterCacheItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptor__AttributeFilterCacheItem(__TypeDescriptor__AttributeFilterCacheItem const&) = delete;

  /// @brief Field _filter, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> ____filter;

  /// @brief Field FilteredMembers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ICollection* ___FilteredMembers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem, ____filter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem, ___FilteredMembers) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: ::FilterCacheItem
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::TypeDescriptor::FilterCacheItem*
class CORDL_TYPE __TypeDescriptor__FilterCacheItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field FilteredMembers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_FilteredMembers, put = __cordl_internal_set_FilteredMembers))::System::Collections::ICollection* FilteredMembers;

  /// @brief Field _filterService, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__filterService, put = __cordl_internal_set__filterService))::System::ComponentModel::Design::ITypeDescriptorFilterService* _filterService;

  /// @brief Method IsValid, addr 0x18e1084, size 0x10, virtual false, abstract: false, final false
  inline bool IsValid(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService);

  static inline ::System::ComponentModel::__TypeDescriptor__FilterCacheItem* New_ctor(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService,
                                                                                      ::System::Collections::ICollection* filteredMembers);

  constexpr ::System::Collections::ICollection*& __cordl_internal_get_FilteredMembers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ICollection*> const& __cordl_internal_get_FilteredMembers() const;

  constexpr ::System::ComponentModel::Design::ITypeDescriptorFilterService*& __cordl_internal_get__filterService();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::Design::ITypeDescriptorFilterService*> const& __cordl_internal_get__filterService() const;

  constexpr void __cordl_internal_set_FilteredMembers(::System::Collections::ICollection* value);

  constexpr void __cordl_internal_set__filterService(::System::ComponentModel::Design::ITypeDescriptorFilterService* value);

  /// @brief Method .ctor, addr 0x18e11c8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService, ::System::Collections::ICollection* filteredMembers);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__FilterCacheItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__FilterCacheItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptor__FilterCacheItem(__TypeDescriptor__FilterCacheItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__FilterCacheItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptor__FilterCacheItem(__TypeDescriptor__FilterCacheItem const&) = delete;

  /// @brief Field _filterService, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::Design::ITypeDescriptorFilterService* ____filterService;

  /// @brief Field FilteredMembers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ICollection* ___FilteredMembers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeDescriptor__FilterCacheItem, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeDescriptor__FilterCacheItem, ____filterService) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeDescriptor__FilterCacheItem, ___FilteredMembers) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: ::IUnimplemented
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::TypeDescriptor::IUnimplemented*
class CORDL_TYPE __TypeDescriptor__IUnimplemented {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__IUnimplemented", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptor__IUnimplemented(__TypeDescriptor__IUnimplemented&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__IUnimplemented", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptor__IUnimplemented(__TypeDescriptor__IUnimplemented const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
// Type: ::MemberDescriptorComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::TypeDescriptor::MemberDescriptorComparer*
class CORDL_TYPE __TypeDescriptor__MemberDescriptorComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance))::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer* Instance;

  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  /// @brief Method Compare, addr 0x18e36a4, size 0x16c, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Object* left, ::System::Object* right);

  static inline ::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer* New_ctor();

  /// @brief Method .ctor, addr 0x18e3810, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer* getStaticF_Instance();

  /// @brief Convert to "::System::Collections::IComparer"
  constexpr ::System::Collections::IComparer* i___System__Collections__IComparer() noexcept;

  static inline void setStaticF_Instance(::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__MemberDescriptorComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__MemberDescriptorComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptor__MemberDescriptorComparer(__TypeDescriptor__MemberDescriptorComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__MemberDescriptorComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptor__MemberDescriptorComparer(__TypeDescriptor__MemberDescriptorComparer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
// Type: ::MergedTypeDescriptor
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::TypeDescriptor::MergedTypeDescriptor*
class CORDL_TYPE __TypeDescriptor__MergedTypeDescriptor : public ::System::Object {
public:
  // Declarations
  /// @brief Field _primary, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__primary, put = __cordl_internal_set__primary))::System::ComponentModel::ICustomTypeDescriptor* _primary;

  /// @brief Field _secondary, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__secondary, put = __cordl_internal_set__secondary))::System::ComponentModel::ICustomTypeDescriptor* _secondary;

  /// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr operator ::System::ComponentModel::ICustomTypeDescriptor*() noexcept;

  static inline ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor* New_ctor(::System::ComponentModel::ICustomTypeDescriptor* primary,
                                                                                           ::System::ComponentModel::ICustomTypeDescriptor* secondary);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetAttributes, addr 0x18e387c, size 0x110, virtual true, abstract: false, final true
  inline ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetClassName, addr 0x18e398c, size 0x118, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetComponentName, addr 0x18e3aa4, size 0x118, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetConverter, addr 0x18e3bbc, size 0x118, virtual true, abstract: false, final true
  inline ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent, addr 0x18e3cd4, size 0x118, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty, addr 0x18e3dec, size 0x118, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEditor, addr 0x18e3f04, size 0x1b4, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x18e40b8, size 0x118, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x18e41d0, size 0x130, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x18e4300, size 0x118, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x18e4418, size 0x130, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner, addr 0x18e4548, size 0x130, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd);

  constexpr ::System::ComponentModel::ICustomTypeDescriptor*& __cordl_internal_get__primary();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ICustomTypeDescriptor*> const& __cordl_internal_get__primary() const;

  constexpr ::System::ComponentModel::ICustomTypeDescriptor*& __cordl_internal_get__secondary();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ICustomTypeDescriptor*> const& __cordl_internal_get__secondary() const;

  constexpr void __cordl_internal_set__primary(::System::ComponentModel::ICustomTypeDescriptor* value);

  constexpr void __cordl_internal_set__secondary(::System::ComponentModel::ICustomTypeDescriptor* value);

  /// @brief Method .ctor, addr 0x18de9f8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::ICustomTypeDescriptor* primary, ::System::ComponentModel::ICustomTypeDescriptor* secondary);

  /// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr ::System::ComponentModel::ICustomTypeDescriptor* i___System__ComponentModel__ICustomTypeDescriptor() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__MergedTypeDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__MergedTypeDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptor__MergedTypeDescriptor(__TypeDescriptor__MergedTypeDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__MergedTypeDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptor__MergedTypeDescriptor(__TypeDescriptor__MergedTypeDescriptor const&) = delete;

  /// @brief Field _primary, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::ICustomTypeDescriptor* ____primary;

  /// @brief Field _secondary, offset: 0x18, size: 0x8, def value: None
  ::System::ComponentModel::ICustomTypeDescriptor* ____secondary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor, ____primary) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor, ____secondary) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: ::DefaultExtendedTypeDescriptor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor
struct CORDL_TYPE __TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor {
public:
  // Declarations
  /// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr operator ::System::ComponentModel::ICustomTypeDescriptor*();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetAttributes, addr 0x18e4de4, size 0x2dc, virtual true, abstract: false, final true
  inline ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetClassName, addr 0x18e50c0, size 0x248, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetComponentName, addr 0x18e5308, size 0x210, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetConverter, addr 0x18e5518, size 0x2ac, virtual true, abstract: false, final true
  inline ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent, addr 0x18e57c4, size 0x210, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty, addr 0x18e59d4, size 0x210, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEditor, addr 0x18e5be4, size 0x2ac, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x18e5e90, size 0x2e0, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x18e6170, size 0x2e8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x18e6458, size 0x2ac, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x18e6704, size 0x2b4, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner, addr 0x18e69b8, size 0x22c, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd);

  /// @brief Method .ctor, addr 0x18e491c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* node, ::System::Object* instance);

  /// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr ::System::ComponentModel::ICustomTypeDescriptor* i___System__ComponentModel__ICustomTypeDescriptor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor();

  // Ctor Parameters [CppParam { name: "_node", ty: "::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*", modifiers: "", def_value: None }, CppParam { name: "_instance", ty:
  // "::System::Object*", modifiers: "", def_value: None }]
  constexpr __TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* _node, ::System::Object* _instance) noexcept;

  /// @brief Field _node, offset: 0x0, size: 0x8, def value: None
  ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* _node;

  /// @brief Field _instance, offset: 0x8, size: 0x8, def value: None
  ::System::Object* _instance;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor, _node) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor, _instance) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DefaultTypeDescriptor
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor
struct CORDL_TYPE __TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor {
public:
  // Declarations
  /// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr operator ::System::ComponentModel::ICustomTypeDescriptor*();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetAttributes, addr 0x18e6be4, size 0x2a8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetClassName, addr 0x18e6e8c, size 0x23c, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetComponentName, addr 0x18e70c8, size 0x210, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetConverter, addr 0x18e72d8, size 0x2ac, virtual true, abstract: false, final true
  inline ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent, addr 0x18e7584, size 0x210, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty, addr 0x18e7794, size 0x210, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEditor, addr 0x18e79a4, size 0x2ac, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x18e7c50, size 0x2ac, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x18e7efc, size 0x2b4, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x18e81b0, size 0x2ac, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x18e845c, size 0x2b4, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner, addr 0x18e8710, size 0x22c, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd);

  /// @brief Method .ctor, addr 0x18e4d04, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* node, ::System::Type* objectType, ::System::Object* instance);

  /// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr ::System::ComponentModel::ICustomTypeDescriptor* i___System__ComponentModel__ICustomTypeDescriptor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor();

  // Ctor Parameters [CppParam { name: "_node", ty: "::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*", modifiers: "", def_value: None }, CppParam { name: "_objectType", ty:
  // "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "_instance", ty: "::System::Object*", modifiers: "", def_value: None }]
  constexpr __TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* _node, ::System::Type* _objectType,
                                                                         ::System::Object* _instance) noexcept;

  /// @brief Field _node, offset: 0x0, size: 0x8, def value: None
  ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* _node;

  /// @brief Field _objectType, offset: 0x8, size: 0x8, def value: None
  ::System::Type* _objectType;

  /// @brief Field _instance, offset: 0x10, size: 0x8, def value: None
  ::System::Object* _instance;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor, _node) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor, _objectType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor, _instance) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TypeDescriptionNode
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::TypeDescriptor::TypeDescriptionNode*
class CORDL_TYPE __TypeDescriptor__TypeDescriptionNode : public ::System::ComponentModel::TypeDescriptionProvider {
public:
  // Declarations
  using DefaultExtendedTypeDescriptor = ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor;

  using DefaultTypeDescriptor = ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor;

  /// @brief Field Next, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Next, put = __cordl_internal_set_Next))::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* Next;

  /// @brief Field Provider, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Provider, put = __cordl_internal_set_Provider))::System::ComponentModel::TypeDescriptionProvider* Provider;

  /// @brief Method CreateInstance, addr 0x18e4678, size 0x188, virtual true, abstract: false, final false
  inline ::System::Object* CreateInstance(::System::IServiceProvider* provider, ::System::Type* objectType, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argTypes,
                                          ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method GetCache, addr 0x18e4800, size 0x70, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionary* GetCache(::System::Object* instance);

  /// @brief Method GetExtendedTypeDescriptor, addr 0x18e4870, size 0xac, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::System::Object* instance);

  /// @brief Method GetExtenderProviders, addr 0x18e4924, size 0x70, virtual true, abstract: false, final false
  inline ::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*> GetExtenderProviders(::System::Object* instance);

  /// @brief Method GetFullComponentName, addr 0x18e4994, size 0x70, virtual true, abstract: false, final false
  inline ::StringW GetFullComponentName(::System::Object* component);

  /// @brief Method GetReflectionType, addr 0x18e4a04, size 0xdc, virtual true, abstract: false, final false
  inline ::System::Type* GetReflectionType(::System::Type* objectType, ::System::Object* instance);

  /// @brief Method GetRuntimeType, addr 0x18e4ae0, size 0xd4, virtual true, abstract: false, final false
  inline ::System::Type* GetRuntimeType(::System::Type* objectType);

  /// @brief Method GetTypeDescriptor, addr 0x18e4bb4, size 0x150, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance);

  /// @brief Method IsSupportedType, addr 0x18e4d10, size 0xd4, virtual true, abstract: false, final false
  inline bool IsSupportedType(::System::Type* type);

  static inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* New_ctor(::System::ComponentModel::TypeDescriptionProvider* provider);

  constexpr ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*& __cordl_internal_get_Next();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*> const& __cordl_internal_get_Next() const;

  constexpr ::System::ComponentModel::TypeDescriptionProvider*& __cordl_internal_get_Provider();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::TypeDescriptionProvider*> const& __cordl_internal_get_Provider() const;

  constexpr void __cordl_internal_set_Next(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* value);

  constexpr void __cordl_internal_set_Provider(::System::ComponentModel::TypeDescriptionProvider* value);

  /// @brief Method .ctor, addr 0x18d6fa0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::TypeDescriptionProvider* provider);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__TypeDescriptionNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__TypeDescriptionNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptor__TypeDescriptionNode(__TypeDescriptor__TypeDescriptionNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__TypeDescriptionNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptor__TypeDescriptionNode(__TypeDescriptor__TypeDescriptionNode const&) = delete;

  /// @brief Field Next, offset: 0x20, size: 0x8, def value: None
  ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* ___Next;

  /// @brief Field Provider, offset: 0x28, size: 0x8, def value: None
  ::System::ComponentModel::TypeDescriptionProvider* ___Provider;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode, ___Next) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode, ___Provider) == 0x28, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: ::TypeDescriptorComObject
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::TypeDescriptor::TypeDescriptorComObject*
class CORDL_TYPE __TypeDescriptor__TypeDescriptorComObject : public ::System::Object {
public:
  // Declarations
  static inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptorComObject* New_ctor();

  /// @brief Method .ctor, addr 0x18e893c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__TypeDescriptorComObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__TypeDescriptorComObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptor__TypeDescriptorComObject(__TypeDescriptor__TypeDescriptorComObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__TypeDescriptorComObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptor__TypeDescriptorComObject(__TypeDescriptor__TypeDescriptorComObject const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeDescriptor__TypeDescriptorComObject, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
// Type: ::TypeDescriptorInterface
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::TypeDescriptor::TypeDescriptorInterface*
class CORDL_TYPE __TypeDescriptor__TypeDescriptorInterface : public ::System::Object {
public:
  // Declarations
  static inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptorInterface* New_ctor();

  /// @brief Method .ctor, addr 0x18e8944, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__TypeDescriptorInterface();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__TypeDescriptorInterface", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptor__TypeDescriptorInterface(__TypeDescriptor__TypeDescriptorInterface&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__TypeDescriptorInterface", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptor__TypeDescriptorInterface(__TypeDescriptor__TypeDescriptorInterface const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeDescriptor__TypeDescriptorInterface, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
// Type: System.ComponentModel::TypeDescriptor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::TypeDescriptor*
class CORDL_TYPE TypeDescriptor : public ::System::Object {
public:
  // Declarations
  using AttributeFilterCacheItem = ::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem;

  using AttributeProvider = ::System::ComponentModel::__TypeDescriptor__AttributeProvider;

  using ComNativeDescriptionProvider = ::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider;

  using FilterCacheItem = ::System::ComponentModel::__TypeDescriptor__FilterCacheItem;

  using IUnimplemented = ::System::ComponentModel::__TypeDescriptor__IUnimplemented;

  using MemberDescriptorComparer = ::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer;

  using MergedTypeDescriptor = ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor;

  using TypeDescriptionNode = ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode;

  using TypeDescriptorComObject = ::System::ComponentModel::__TypeDescriptor__TypeDescriptorComObject;

  using TypeDescriptorInterface = ::System::ComponentModel::__TypeDescriptor__TypeDescriptorInterface;

  /// @brief Field Refreshed, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Refreshed, put = setStaticF_Refreshed))::System::ComponentModel::RefreshEventHandler* Refreshed;

  /// @brief Field TraceDescriptor, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TraceDescriptor, put = setStaticF_TraceDescriptor))::System::Diagnostics::BooleanSwitch* TraceDescriptor;

  /// @brief Field _associationTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__associationTable, put = setStaticF__associationTable))::System::ComponentModel::WeakHashtable* _associationTable;

  /// @brief Field _collisionIndex, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__collisionIndex, put = setStaticF__collisionIndex)) int32_t _collisionIndex;

  /// @brief Field _defaultProviders, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__defaultProviders, put = setStaticF__defaultProviders))::System::Collections::Hashtable* _defaultProviders;

  /// @brief Field _internalSyncObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__internalSyncObject, put = setStaticF__internalSyncObject))::System::Object* _internalSyncObject;

  /// @brief Field _metadataVersion, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__metadataVersion, put = setStaticF__metadataVersion)) int32_t _metadataVersion;

  /// @brief Field _pipelineAttributeFilterKeys, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__pipelineAttributeFilterKeys,
                             put = setStaticF__pipelineAttributeFilterKeys))::ArrayW<::System::Guid, ::Array<::System::Guid>*> _pipelineAttributeFilterKeys;

  /// @brief Field _pipelineFilterKeys, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__pipelineFilterKeys, put = setStaticF__pipelineFilterKeys))::ArrayW<::System::Guid, ::Array<::System::Guid>*> _pipelineFilterKeys;

  /// @brief Field _pipelineInitializeKeys, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__pipelineInitializeKeys, put = setStaticF__pipelineInitializeKeys))::ArrayW<::System::Guid, ::Array<::System::Guid>*> _pipelineInitializeKeys;

  /// @brief Field _pipelineMergeKeys, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__pipelineMergeKeys, put = setStaticF__pipelineMergeKeys))::ArrayW<::System::Guid, ::Array<::System::Guid>*> _pipelineMergeKeys;

  /// @brief Field _providerTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__providerTable, put = setStaticF__providerTable))::System::ComponentModel::WeakHashtable* _providerTable;

  /// @brief Field _providerTypeTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__providerTypeTable, put = setStaticF__providerTypeTable))::System::Collections::Hashtable* _providerTypeTable;

  /// @brief Method AddAttributes, addr 0x18d65c0, size 0x12c, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::TypeDescriptionProvider* AddAttributes(::System::Object* instance, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method AddAttributes, addr 0x18d635c, size 0x160, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::TypeDescriptionProvider* AddAttributes(::System::Type* type, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method AddEditorTable, addr 0x18d6a20, size 0x68, virtual false, abstract: false, final false
  static inline void AddEditorTable(::System::Type* editorBaseType, ::System::Collections::Hashtable* table);

  /// @brief Method AddProvider, addr 0x18d6794, size 0x28c, virtual false, abstract: false, final false
  static inline void AddProvider(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Object* instance);

  /// @brief Method AddProvider, addr 0x18d5e5c, size 0x284, virtual false, abstract: false, final false
  static inline void AddProvider(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Type* type);

  /// @brief Method AddProviderTransparent, addr 0x18d8148, size 0xd4, virtual false, abstract: false, final false
  static inline void AddProviderTransparent(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Object* instance);

  /// @brief Method AddProviderTransparent, addr 0x18d8040, size 0x108, virtual false, abstract: false, final false
  static inline void AddProviderTransparent(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Type* type);

  /// @brief Method CheckDefaultProvider, addr 0x18d821c, size 0x60c, virtual false, abstract: false, final false
  static inline void CheckDefaultProvider(::System::Type* type);

  /// @brief Method ConvertFromInvariantString, addr 0x18de4a0, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Object* ConvertFromInvariantString(::System::Type* type, ::StringW stringValue);

  /// @brief Method CreateAssociation, addr 0x18d8828, size 0x768, virtual false, abstract: false, final false
  static inline void CreateAssociation(::System::Object* primary, ::System::Object* secondary);

  /// @brief Method CreateDesigner, addr 0x18d8ff4, size 0x45c, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::Design::IDesigner* CreateDesigner(::System::ComponentModel::IComponent* component, ::System::Type* designerBaseType);

  /// @brief Method CreateEvent, addr 0x18d9450, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::EventDescriptor* CreateEvent(::System::Type* componentType, ::StringW name, ::System::Type* type,
                                                                       ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method CreateEvent, addr 0x18d94dc, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::EventDescriptor* CreateEvent(::System::Type* componentType, ::System::ComponentModel::EventDescriptor* oldEventDescriptor,
                                                                       ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method CreateInstance, addr 0x18d9558, size 0x2cc, virtual false, abstract: false, final false
  static inline ::System::Object* CreateInstance(::System::IServiceProvider* provider, ::System::Type* objectType, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argTypes,
                                                 ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method CreateProperty, addr 0x18d9824, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptor* CreateProperty(::System::Type* componentType, ::StringW name, ::System::Type* type,
                                                                             ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method CreateProperty, addr 0x18d98b0, size 0x1bc, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptor* CreateProperty(::System::Type* componentType, ::System::ComponentModel::PropertyDescriptor* oldPropertyDescriptor,
                                                                             ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method DebugValidate, addr 0x18d9a70, size 0x4, virtual false, abstract: false, final false
  static inline void DebugValidate(::System::ComponentModel::AttributeCollection* attributes, ::System::ComponentModel::AttributeCollection* debugAttributes);

  /// @brief Method DebugValidate, addr 0x18d9a78, size 0x4, virtual false, abstract: false, final false
  static inline void DebugValidate(::System::ComponentModel::AttributeCollection* attributes, ::System::Object* instance, bool noCustomTypeDesc);

  /// @brief Method DebugValidate, addr 0x18d9a74, size 0x4, virtual false, abstract: false, final false
  static inline void DebugValidate(::System::ComponentModel::AttributeCollection* attributes, ::System::Type* type);

  /// @brief Method DebugValidate, addr 0x18d9a80, size 0x4, virtual false, abstract: false, final false
  static inline void DebugValidate(::System::ComponentModel::TypeConverter* converter, ::System::Object* instance, bool noCustomTypeDesc);

  /// @brief Method DebugValidate, addr 0x18d9a7c, size 0x4, virtual false, abstract: false, final false
  static inline void DebugValidate(::System::ComponentModel::TypeConverter* converter, ::System::Type* type);

  /// @brief Method DebugValidate, addr 0x18d9a88, size 0x4, virtual false, abstract: false, final false
  static inline void DebugValidate(::System::ComponentModel::EventDescriptorCollection* events, ::System::Object* instance, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes,
                                   bool noCustomTypeDesc);

  /// @brief Method DebugValidate, addr 0x18d9a84, size 0x4, virtual false, abstract: false, final false
  static inline void DebugValidate(::System::ComponentModel::EventDescriptorCollection* events, ::System::Type* type, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method DebugValidate, addr 0x18d9a90, size 0x4, virtual false, abstract: false, final false
  static inline void DebugValidate(::System::ComponentModel::PropertyDescriptorCollection* properties, ::System::Object* instance,
                                   ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes, bool noCustomTypeDesc);

  /// @brief Method DebugValidate, addr 0x18d9a8c, size 0x4, virtual false, abstract: false, final false
  static inline void DebugValidate(::System::ComponentModel::PropertyDescriptorCollection* properties, ::System::Type* type, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method DebugValidate, addr 0x18d9a6c, size 0x4, virtual false, abstract: false, final false
  static inline void DebugValidate(::System::Type* type, ::System::ComponentModel::AttributeCollection* attributes, ::System::ComponentModel::AttributeCollection* debugAttributes);

  /// @brief Method FilterMembers, addr 0x18d9a94, size 0x358, virtual false, abstract: false, final false
  static inline ::System::Collections::ArrayList* FilterMembers(::System::Collections::IList* members, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetAssociation, addr 0x18d9e7c, size 0x6d4, virtual false, abstract: false, final false
  static inline ::System::Object* GetAssociation(::System::Type* type, ::System::Object* primary);

  /// @brief Method GetAttributes, addr 0x18d25c0, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::AttributeCollection* GetAttributes(::System::Object* component);

  /// @brief Method GetAttributes, addr 0x18da63c, size 0x420, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::AttributeCollection* GetAttributes(::System::Object* component, bool noCustomTypeDesc);

  /// @brief Method GetAttributes, addr 0x18d1ba8, size 0x15c, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::AttributeCollection* GetAttributes(::System::Type* componentType);

  /// @brief Method GetCache, addr 0x18dd750, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Collections::IDictionary* GetCache(::System::Object* instance);

  /// @brief Method GetClassName, addr 0x18ddf28, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW GetClassName(::System::Object* component);

  /// @brief Method GetClassName, addr 0x18ddf80, size 0xe0, virtual false, abstract: false, final false
  static inline ::StringW GetClassName(::System::Object* component, bool noCustomTypeDesc);

  /// @brief Method GetClassName, addr 0x18de060, size 0xe8, virtual false, abstract: false, final false
  static inline ::StringW GetClassName(::System::Type* componentType);

  /// @brief Method GetComponentName, addr 0x18de148, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW GetComponentName(::System::Object* component);

  /// @brief Method GetComponentName, addr 0x18de1a0, size 0xe0, virtual false, abstract: false, final false
  static inline ::StringW GetComponentName(::System::Object* component, bool noCustomTypeDesc);

  /// @brief Method GetConverter, addr 0x18de280, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::TypeConverter* GetConverter(::System::Object* component);

  /// @brief Method GetConverter, addr 0x18de2d8, size 0xe0, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::TypeConverter* GetConverter(::System::Object* component, bool noCustomTypeDesc);

  /// @brief Method GetConverter, addr 0x18de3b8, size 0xe8, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::TypeConverter* GetConverter(::System::Type* type);

  /// @brief Method GetDefaultEvent, addr 0x18de640, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::EventDescriptor* GetDefaultEvent(::System::Object* component);

  /// @brief Method GetDefaultEvent, addr 0x18de698, size 0xec, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::EventDescriptor* GetDefaultEvent(::System::Object* component, bool noCustomTypeDesc);

  /// @brief Method GetDefaultEvent, addr 0x18de510, size 0x130, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::EventDescriptor* GetDefaultEvent(::System::Type* componentType);

  /// @brief Method GetDefaultProperty, addr 0x18de8b4, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptor* GetDefaultProperty(::System::Object* component);

  /// @brief Method GetDefaultProperty, addr 0x18de90c, size 0xec, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptor* GetDefaultProperty(::System::Object* component, bool noCustomTypeDesc);

  /// @brief Method GetDefaultProperty, addr 0x18de784, size 0x130, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptor* GetDefaultProperty(::System::Type* componentType);

  /// @brief Method GetDescriptor, addr 0x18daa5c, size 0x218, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::ICustomTypeDescriptor* GetDescriptor(::System::Object* component, bool noCustomTypeDesc);

  /// @brief Method GetDescriptor, addr 0x18da550, size 0xec, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::ICustomTypeDescriptor* GetDescriptor(::System::Type* type, ::StringW typeName);

  /// @brief Method GetEditor, addr 0x18dea24, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Object* GetEditor(::System::Object* component, ::System::Type* editorBaseType);

  /// @brief Method GetEditor, addr 0x18dea8c, size 0x16c, virtual false, abstract: false, final false
  static inline ::System::Object* GetEditor(::System::Object* component, ::System::Type* editorBaseType, bool noCustomTypeDesc);

  /// @brief Method GetEditor, addr 0x18debf8, size 0x17c, virtual false, abstract: false, final false
  static inline ::System::Object* GetEditor(::System::Type* type, ::System::Type* editorBaseType);

  /// @brief Method GetEvents, addr 0x18d295c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Object* component);

  /// @brief Method GetEvents, addr 0x18df51c, size 0x68, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Object* component, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetEvents, addr 0x18defd0, size 0x4e4, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Object* component, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes,
                                                                               bool noCustomTypeDesc);

  /// @brief Method GetEvents, addr 0x18df4b4, size 0x68, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Object* component, bool noCustomTypeDesc);

  /// @brief Method GetEvents, addr 0x18d29b8, size 0x164, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Type* componentType);

  /// @brief Method GetEvents, addr 0x18ded74, size 0x25c, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Type* componentType, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetExtendedDescriptor, addr 0x18dac74, size 0xbc, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::ICustomTypeDescriptor* GetExtendedDescriptor(::System::Object* component);

  /// @brief Method GetExtenderCollisionSuffix, addr 0x18dfbd4, size 0x318, virtual false, abstract: false, final false
  static inline ::StringW GetExtenderCollisionSuffix(::System::ComponentModel::MemberDescriptor* member);

  /// @brief Method GetFullComponentName, addr 0x18dfeec, size 0xbc, virtual false, abstract: false, final false
  static inline ::StringW GetFullComponentName(::System::Object* component);

  /// @brief Method GetNodeForBaseType, addr 0x18dffa8, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Type* GetNodeForBaseType(::System::Type* searchType);

  /// @brief Method GetProperties, addr 0x18d2cb8, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object* component);

  /// @brief Method GetProperties, addr 0x18e0994, size 0x68, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object* component, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetProperties, addr 0x18e09fc, size 0x70, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object* component, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes,
                                                                                      bool noCustomTypeDesc);

  /// @brief Method GetProperties, addr 0x18e02d8, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object* component, bool noCustomTypeDesc);

  /// @brief Method GetProperties, addr 0x18d2d10, size 0x164, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Type* componentType);

  /// @brief Method GetProperties, addr 0x18e007c, size 0x25c, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Type* componentType, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetPropertiesImpl, addr 0x18e0344, size 0x650, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptorCollection* GetPropertiesImpl(::System::Object* component, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes,
                                                                                          bool noCustomTypeDesc, bool noAttributes);

  /// @brief Method GetProvider, addr 0x18d66ec, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::TypeDescriptionProvider* GetProvider(::System::Object* instance);

  /// @brief Method GetProvider, addr 0x18d64bc, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::TypeDescriptionProvider* GetProvider(::System::Type* type);

  /// @brief Method GetProviderRecursive, addr 0x18e0a6c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::TypeDescriptionProvider* GetProviderRecursive(::System::Type* type);

  /// @brief Method GetReflectionType, addr 0x18e0bb0, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::Type* GetReflectionType(::System::Object* instance);

  /// @brief Method GetReflectionType, addr 0x18e0ac4, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Type* GetReflectionType(::System::Type* type);

  static inline ::System::ComponentModel::TypeDescriptor* New_ctor();

  /// @brief Method NodeFor, addr 0x18dded0, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* NodeFor(::System::Object* instance);

  /// @brief Method NodeFor, addr 0x18d75d8, size 0x16c, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* NodeFor(::System::Object* instance, bool createDelegator);

  /// @brief Method NodeFor, addr 0x18d5d00, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* NodeFor(::System::Type* type);

  /// @brief Method NodeFor, addr 0x18d6a88, size 0x518, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* NodeFor(::System::Type* type, bool createDelegator);

  /// @brief Method NodeRemove, addr 0x18e0c68, size 0x378, virtual false, abstract: false, final false
  static inline void NodeRemove(::System::Object* key, ::System::ComponentModel::TypeDescriptionProvider* provider);

  /// @brief Method PipelineAttributeFilter, addr 0x18df584, size 0x650, virtual false, abstract: false, final false
  static inline ::System::Collections::ICollection* PipelineAttributeFilter(int32_t pipelineType, ::System::Collections::ICollection* members,
                                                                            ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter, ::System::Object* instance,
                                                                            ::System::Collections::IDictionary* cache);

  /// @brief Method PipelineFilter, addr 0x18dbe74, size 0x18dc, virtual false, abstract: false, final false
  static inline ::System::Collections::ICollection* PipelineFilter(int32_t pipelineType, ::System::Collections::ICollection* members, ::System::Object* instance,
                                                                   ::System::Collections::IDictionary* cache);

  /// @brief Method PipelineInitialize, addr 0x18dd7bc, size 0x714, virtual false, abstract: false, final false
  static inline ::System::Collections::ICollection* PipelineInitialize(int32_t pipelineType, ::System::Collections::ICollection* members, ::System::Collections::IDictionary* cache);

  /// @brief Method PipelineMerge, addr 0x18dad30, size 0x1144, virtual false, abstract: false, final false
  static inline ::System::Collections::ICollection* PipelineMerge(int32_t pipelineType, ::System::Collections::ICollection* primary, ::System::Collections::ICollection* secondary,
                                                                  ::System::Object* instance, ::System::Collections::IDictionary* cache);

  /// @brief Method RaiseRefresh, addr 0x18e11f4, size 0xb4, virtual false, abstract: false, final false
  static inline void RaiseRefresh(::System::Object* component);

  /// @brief Method RaiseRefresh, addr 0x18e12a8, size 0xb4, virtual false, abstract: false, final false
  static inline void RaiseRefresh(::System::Type* type);

  /// @brief Method Refresh, addr 0x18e13b4, size 0xa10, virtual false, abstract: false, final false
  static inline void Refresh(::System::Reflection::Module* _cordl_module);

  /// @brief Method Refresh, addr 0x18e1dc4, size 0xc8, virtual false, abstract: false, final false
  static inline void Refresh(::System::Reflection::Assembly* assembly);

  /// @brief Method Refresh, addr 0x18e135c, size 0x58, virtual false, abstract: false, final false
  static inline void Refresh(::System::Object* component);

  /// @brief Method Refresh, addr 0x18d77d0, size 0x870, virtual false, abstract: false, final false
  static inline void Refresh(::System::Object* component, bool refreshReflectionProvider);

  /// @brief Method Refresh, addr 0x18d6fc8, size 0x610, virtual false, abstract: false, final false
  static inline void Refresh(::System::Type* type);

  /// @brief Method RemoveAssociation, addr 0x18e1e8c, size 0x3b4, virtual false, abstract: false, final false
  static inline void RemoveAssociation(::System::Object* primary, ::System::Object* secondary);

  /// @brief Method RemoveAssociations, addr 0x18e2240, size 0xd4, virtual false, abstract: false, final false
  static inline void RemoveAssociations(::System::Object* primary);

  /// @brief Method RemoveProvider, addr 0x18e2424, size 0xdc, virtual false, abstract: false, final false
  static inline void RemoveProvider(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Object* instance);

  /// @brief Method RemoveProvider, addr 0x18e2314, size 0x110, virtual false, abstract: false, final false
  static inline void RemoveProvider(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Type* type);

  /// @brief Method RemoveProviderTransparent, addr 0x18e2608, size 0xd4, virtual false, abstract: false, final false
  static inline void RemoveProviderTransparent(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Object* instance);

  /// @brief Method RemoveProviderTransparent, addr 0x18e2500, size 0x108, virtual false, abstract: false, final false
  static inline void RemoveProviderTransparent(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Type* type);

  /// @brief Method ShouldHideMember, addr 0x18d9dec, size 0x90, virtual false, abstract: false, final false
  static inline bool ShouldHideMember(::System::ComponentModel::MemberDescriptor* member, ::System::Attribute* attribute);

  /// @brief Method SortDescriptorArray, addr 0x18e26dc, size 0xd8, virtual false, abstract: false, final false
  static inline void SortDescriptorArray(::System::Collections::IList* infos);

  /// @brief Method Trace, addr 0x18e27b4, size 0x4, virtual false, abstract: false, final false
  static inline void Trace(::StringW message, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method .ctor, addr 0x18d5be8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_Refreshed, addr 0x18d61a4, size 0xdc, virtual false, abstract: false, final false
  static inline void add_Refreshed(::System::ComponentModel::RefreshEventHandler* value);

  static inline ::System::ComponentModel::RefreshEventHandler* getStaticF_Refreshed();

  static inline ::System::Diagnostics::BooleanSwitch* getStaticF_TraceDescriptor();

  static inline ::System::ComponentModel::WeakHashtable* getStaticF__associationTable();

  static inline int32_t getStaticF__collisionIndex();

  static inline ::System::Collections::Hashtable* getStaticF__defaultProviders();

  static inline ::System::Object* getStaticF__internalSyncObject();

  static inline int32_t getStaticF__metadataVersion();

  static inline ::ArrayW<::System::Guid, ::Array<::System::Guid>*> getStaticF__pipelineAttributeFilterKeys();

  static inline ::ArrayW<::System::Guid, ::Array<::System::Guid>*> getStaticF__pipelineFilterKeys();

  static inline ::ArrayW<::System::Guid, ::Array<::System::Guid>*> getStaticF__pipelineInitializeKeys();

  static inline ::ArrayW<::System::Guid, ::Array<::System::Guid>*> getStaticF__pipelineMergeKeys();

  static inline ::System::ComponentModel::WeakHashtable* getStaticF__providerTable();

  static inline ::System::Collections::Hashtable* getStaticF__providerTypeTable();

  /// @brief Method get_ComNativeDescriptorHandler, addr 0x18d5bf0, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::IComNativeDescriptorHandler* get_ComNativeDescriptorHandler();

  /// @brief Method get_ComObjectType, addr 0x18d5c94, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Type* get_ComObjectType();

  /// @brief Method get_InterfaceType, addr 0x18d60e0, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Type* get_InterfaceType();

  /// @brief Method get_MetadataVersion, addr 0x18d614c, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_MetadataVersion();

  /// @brief Method remove_Refreshed, addr 0x18d6280, size 0xdc, virtual false, abstract: false, final false
  static inline void remove_Refreshed(::System::ComponentModel::RefreshEventHandler* value);

  static inline void setStaticF_Refreshed(::System::ComponentModel::RefreshEventHandler* value);

  static inline void setStaticF_TraceDescriptor(::System::Diagnostics::BooleanSwitch* value);

  static inline void setStaticF__associationTable(::System::ComponentModel::WeakHashtable* value);

  static inline void setStaticF__collisionIndex(int32_t value);

  static inline void setStaticF__defaultProviders(::System::Collections::Hashtable* value);

  static inline void setStaticF__internalSyncObject(::System::Object* value);

  static inline void setStaticF__metadataVersion(int32_t value);

  static inline void setStaticF__pipelineAttributeFilterKeys(::ArrayW<::System::Guid, ::Array<::System::Guid>*> value);

  static inline void setStaticF__pipelineFilterKeys(::ArrayW<::System::Guid, ::Array<::System::Guid>*> value);

  static inline void setStaticF__pipelineInitializeKeys(::ArrayW<::System::Guid, ::Array<::System::Guid>*> value);

  static inline void setStaticF__pipelineMergeKeys(::ArrayW<::System::Guid, ::Array<::System::Guid>*> value);

  static inline void setStaticF__providerTable(::System::ComponentModel::WeakHashtable* value);

  static inline void setStaticF__providerTypeTable(::System::Collections::Hashtable* value);

  /// @brief Method set_ComNativeDescriptorHandler, addr 0x18d5d58, size 0xdc, virtual false, abstract: false, final false
  static inline void set_ComNativeDescriptorHandler(::System::ComponentModel::IComNativeDescriptorHandler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeDescriptor(TypeDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeDescriptor(TypeDescriptor const&) = delete;

  /// @brief Field PIPELINE_ATTRIBUTES offset 0xffffffff size 0x4
  static constexpr int32_t PIPELINE_ATTRIBUTES{ static_cast<int32_t>(0x0) };

  /// @brief Field PIPELINE_EVENTS offset 0xffffffff size 0x4
  static constexpr int32_t PIPELINE_EVENTS{ static_cast<int32_t>(0x2) };

  /// @brief Field PIPELINE_PROPERTIES offset 0xffffffff size 0x4
  static constexpr int32_t PIPELINE_PROPERTIES{ static_cast<int32_t>(0x1) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::TypeDescriptor, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::GlobalNamespace::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor*, "System.ComponentModel", "TypeDescriptor/AttributeProvider/AttributeTypeDescriptor");
NEED_NO_BOX(::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*, "System.ComponentModel",
                       "TypeDescriptor/ComNativeDescriptionProvider/ComNativeTypeDescriptor");
NEED_NO_BOX(::System::ComponentModel::TypeDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptor*, "System.ComponentModel", "TypeDescriptor");
NEED_NO_BOX(::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem*, "System.ComponentModel", "TypeDescriptor/AttributeFilterCacheItem");
NEED_NO_BOX(::System::ComponentModel::__TypeDescriptor__AttributeProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__TypeDescriptor__AttributeProvider*, "System.ComponentModel", "TypeDescriptor/AttributeProvider");
NEED_NO_BOX(::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider*, "System.ComponentModel", "TypeDescriptor/ComNativeDescriptionProvider");
NEED_NO_BOX(::System::ComponentModel::__TypeDescriptor__FilterCacheItem);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__TypeDescriptor__FilterCacheItem*, "System.ComponentModel", "TypeDescriptor/FilterCacheItem");
NEED_NO_BOX(::System::ComponentModel::__TypeDescriptor__IUnimplemented);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__TypeDescriptor__IUnimplemented*, "System.ComponentModel", "TypeDescriptor/IUnimplemented");
NEED_NO_BOX(::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer*, "System.ComponentModel", "TypeDescriptor/MemberDescriptorComparer");
NEED_NO_BOX(::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*, "System.ComponentModel", "TypeDescriptor/MergedTypeDescriptor");
NEED_NO_BOX(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*, "System.ComponentModel", "TypeDescriptor/TypeDescriptionNode");
NEED_NO_BOX(::System::ComponentModel::__TypeDescriptor__TypeDescriptorComObject);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__TypeDescriptor__TypeDescriptorComObject*, "System.ComponentModel", "TypeDescriptor/TypeDescriptorComObject");
NEED_NO_BOX(::System::ComponentModel::__TypeDescriptor__TypeDescriptorInterface);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__TypeDescriptor__TypeDescriptorInterface*, "System.ComponentModel", "TypeDescriptor/TypeDescriptorInterface");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor, "System.ComponentModel",
                       "TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor, "System.ComponentModel", "TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor");

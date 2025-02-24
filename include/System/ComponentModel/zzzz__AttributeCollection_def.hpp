#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AttributeCollection)
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::ComponentModel {
struct __AttributeCollection__AttributeEntry;
}
namespace System {
class Array;
}
namespace System {
class Attribute;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class AttributeCollection;
}
namespace System::ComponentModel {
struct __AttributeCollection__AttributeEntry;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::AttributeCollection);
MARK_VAL_T(::System::ComponentModel::__AttributeCollection__AttributeEntry);
// Type: ::AttributeEntry
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: true
// CS Name: ::AttributeCollection::AttributeEntry
struct CORDL_TYPE __AttributeCollection__AttributeEntry {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AttributeCollection__AttributeEntry();

  // Ctor Parameters [CppParam { name: "type", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AttributeCollection__AttributeEntry(::System::Type* type, int32_t index) noexcept;

  /// @brief Field type, offset: 0x0, size: 0x8, def value: None
  ::System::Type* type;

  /// @brief Field index, offset: 0x8, size: 0x4, def value: None
  int32_t index;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__AttributeCollection__AttributeEntry, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__AttributeCollection__AttributeEntry, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__AttributeCollection__AttributeEntry, index) == 0x8, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: System.ComponentModel::AttributeCollection
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::AttributeCollection*
class CORDL_TYPE AttributeCollection : public ::System::Object {
public:
  // Declarations
  using AttributeEntry = ::System::ComponentModel::__AttributeCollection__AttributeEntry;

  __declspec(property(get = get_Attributes))::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> Attributes;

  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::System::ComponentModel::AttributeCollection* Empty;

  __declspec(property(get = get_Item))::System::Attribute* Item[];

  __declspec(property(get = get_Item))::System::Attribute* Item[];

  __declspec(property(get = System_Collections_ICollection_get_Count)) int32_t System_Collections_ICollection_Count;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Field _attributes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__attributes, put = __cordl_internal_set__attributes))::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> _attributes;

  /// @brief Field _foundAttributeTypes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__foundAttributeTypes,
                      put = __cordl_internal_set__foundAttributeTypes))::ArrayW<::System::ComponentModel::__AttributeCollection__AttributeEntry,
                                                                                ::Array<::System::ComponentModel::__AttributeCollection__AttributeEntry>*> _foundAttributeTypes;

  /// @brief Field _index, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  /// @brief Field s_defaultAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_defaultAttributes, put = setStaticF_s_defaultAttributes))::System::Collections::Hashtable* s_defaultAttributes;

  /// @brief Field s_internalSyncObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_internalSyncObject, put = setStaticF_s_internalSyncObject))::System::Object* s_internalSyncObject;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Contains, addr 0x1aea9d0, size 0x60, virtual false, abstract: false, final false
  inline bool Contains(::System::Attribute* attribute);

  /// @brief Method Contains, addr 0x1aeaa30, size 0x78, virtual false, abstract: false, final false
  inline bool Contains(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method CopyTo, addr 0x1ae9ef4, size 0x6c, virtual true, abstract: false, final true
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method FromExisting, addr 0x1ae9b64, size 0x36c, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::AttributeCollection* FromExisting(::System::ComponentModel::AttributeCollection* existing,
                                                                            ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> newAttributes);

  /// @brief Method GetDefaultAttribute, addr 0x1aea480, size 0x550, virtual false, abstract: false, final false
  inline ::System::Attribute* GetDefaultAttribute(::System::Type* attributeType);

  /// @brief Method GetEnumerator, addr 0x1aeaaa8, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method Matches, addr 0x1aeaacc, size 0xac, virtual false, abstract: false, final false
  inline bool Matches(::System::Attribute* attribute);

  /// @brief Method Matches, addr 0x1aeab78, size 0x7c, virtual false, abstract: false, final false
  inline bool Matches(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  static inline ::System::ComponentModel::AttributeCollection* New_ctor();

  static inline ::System::ComponentModel::AttributeCollection* New_ctor(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.Collections.ICollection.get_Count, addr 0x1aeac04, size 0x24, virtual true, abstract: false, final true
  inline int32_t System_Collections_ICollection_get_Count();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x1aeabf4, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x1aeabfc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1aeac28, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> const& __cordl_internal_get__attributes() const;

  constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>& __cordl_internal_get__attributes();

  constexpr ::ArrayW<::System::ComponentModel::__AttributeCollection__AttributeEntry, ::Array<::System::ComponentModel::__AttributeCollection__AttributeEntry>*> const&
  __cordl_internal_get__foundAttributeTypes() const;

  constexpr ::ArrayW<::System::ComponentModel::__AttributeCollection__AttributeEntry, ::Array<::System::ComponentModel::__AttributeCollection__AttributeEntry>*>&
  __cordl_internal_get__foundAttributeTypes();

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr void __cordl_internal_set__attributes(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> value);

  constexpr void
  __cordl_internal_set__foundAttributeTypes(::ArrayW<::System::ComponentModel::__AttributeCollection__AttributeEntry, ::Array<::System::ComponentModel::__AttributeCollection__AttributeEntry>*> value);

  constexpr void __cordl_internal_set__index(int32_t value);

  /// @brief Method .ctor, addr 0x1ae9b5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1ae9a38, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  static inline ::System::ComponentModel::AttributeCollection* getStaticF_Empty();

  static inline ::System::Collections::Hashtable* getStaticF_s_defaultAttributes();

  static inline ::System::Object* getStaticF_s_internalSyncObject();

  /// @brief Method get_Attributes, addr 0x1ae9f60, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> get_Attributes();

  /// @brief Method get_Count, addr 0x1ae9ed0, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x1ae9fa8, size 0x4d8, virtual true, abstract: false, final false
  inline ::System::Attribute* get_Item(::System::Type* attributeType);

  /// @brief Method get_Item, addr 0x1ae9f68, size 0x40, virtual true, abstract: false, final false
  inline ::System::Attribute* get_Item(int32_t index);

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  static inline void setStaticF_Empty(::System::ComponentModel::AttributeCollection* value);

  static inline void setStaticF_s_defaultAttributes(::System::Collections::Hashtable* value);

  static inline void setStaticF_s_internalSyncObject(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AttributeCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttributeCollection(AttributeCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttributeCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttributeCollection(AttributeCollection const&) = delete;

  /// @brief Field _attributes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> ____attributes;

  /// @brief Field _foundAttributeTypes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::ComponentModel::__AttributeCollection__AttributeEntry, ::Array<::System::ComponentModel::__AttributeCollection__AttributeEntry>*> ____foundAttributeTypes;

  /// @brief Field _index, offset: 0x20, size: 0x4, def value: None
  int32_t ____index;

  /// @brief Field FOUND_TYPES_LIMIT offset 0xffffffff size 0x4
  static constexpr int32_t FOUND_TYPES_LIMIT{ static_cast<int32_t>(0x5) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::AttributeCollection, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::AttributeCollection, ____attributes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::AttributeCollection, ____foundAttributeTypes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::AttributeCollection, ____index) == 0x20, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::AttributeCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::AttributeCollection*, "System.ComponentModel", "AttributeCollection");
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__AttributeCollection__AttributeEntry, "System.ComponentModel", "AttributeCollection/AttributeEntry");

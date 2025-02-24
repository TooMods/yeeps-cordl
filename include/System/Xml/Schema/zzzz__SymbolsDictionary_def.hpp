#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SymbolsDictionary)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class ICollection;
}
namespace System::Xml::Schema {
class NamespaceList;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class SymbolsDictionary;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::SymbolsDictionary);
// Type: System.Xml.Schema::SymbolsDictionary
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::SymbolsDictionary*
class CORDL_TYPE SymbolsDictionary : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsUpaEnforced, put = set_IsUpaEnforced)) bool IsUpaEnforced;

  __declspec(property(get = get_Item)) int32_t Item[];

  /// @brief Field isUpaEnforced, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_isUpaEnforced, put = __cordl_internal_set_isUpaEnforced)) bool isUpaEnforced;

  /// @brief Field last, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_last, put = __cordl_internal_set_last)) int32_t last;

  /// @brief Field names, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_names, put = __cordl_internal_set_names))::System::Collections::Hashtable* names;

  /// @brief Field particleLast, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_particleLast, put = __cordl_internal_set_particleLast))::System::Object* particleLast;

  /// @brief Field particles, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_particles, put = __cordl_internal_set_particles))::System::Collections::ArrayList* particles;

  /// @brief Field wildcards, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_wildcards, put = __cordl_internal_set_wildcards))::System::Collections::Hashtable* wildcards;

  /// @brief Method AddName, addr 0x304fb94, size 0x134, virtual false, abstract: false, final false
  inline int32_t AddName(::System::Xml::XmlQualifiedName* name, ::System::Object* particle);

  /// @brief Method AddNamespaceList, addr 0x304fcc8, size 0x39c, virtual false, abstract: false, final false
  inline void AddNamespaceList(::System::Xml::Schema::NamespaceList* list, ::System::Object* particle, bool allowLocal);

  /// @brief Method AddWildcard, addr 0x3050064, size 0x168, virtual false, abstract: false, final false
  inline void AddWildcard(::StringW wildcard, ::System::Object* particle);

  /// @brief Method Exists, addr 0x3050a14, size 0x30, virtual false, abstract: false, final false
  inline bool Exists(::System::Xml::XmlQualifiedName* name);

  /// @brief Method GetNamespaceListSymbols, addr 0x30501cc, size 0x790, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* GetNamespaceListSymbols(::System::Xml::Schema::NamespaceList* list);

  /// @brief Method GetParticle, addr 0x3050a44, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Object* GetParticle(int32_t symbol);

  /// @brief Method NameOf, addr 0x3050a80, size 0x710, virtual false, abstract: false, final false
  inline ::StringW NameOf(int32_t symbol);

  static inline ::System::Xml::Schema::SymbolsDictionary* New_ctor();

  constexpr bool const& __cordl_internal_get_isUpaEnforced() const;

  constexpr bool& __cordl_internal_get_isUpaEnforced();

  constexpr int32_t const& __cordl_internal_get_last() const;

  constexpr int32_t& __cordl_internal_get_last();

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_names();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_names() const;

  constexpr ::System::Object*& __cordl_internal_get_particleLast();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_particleLast() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_particles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get_particles() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_wildcards();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_wildcards() const;

  constexpr void __cordl_internal_set_isUpaEnforced(bool value);

  constexpr void __cordl_internal_set_last(int32_t value);

  constexpr void __cordl_internal_set_names(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_particleLast(::System::Object* value);

  constexpr void __cordl_internal_set_particles(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_wildcards(::System::Collections::Hashtable* value);

  /// @brief Method .ctor, addr 0x304fad0, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x304fb74, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsUpaEnforced, addr 0x304fb80, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsUpaEnforced();

  /// @brief Method get_Item, addr 0x305095c, size 0xb8, virtual false, abstract: false, final false
  inline int32_t get_Item(::System::Xml::XmlQualifiedName* name);

  /// @brief Method set_IsUpaEnforced, addr 0x304fb88, size 0xc, virtual false, abstract: false, final false
  inline void set_IsUpaEnforced(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SymbolsDictionary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SymbolsDictionary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SymbolsDictionary(SymbolsDictionary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SymbolsDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SymbolsDictionary(SymbolsDictionary const&) = delete;

  /// @brief Field last, offset: 0x10, size: 0x4, def value: None
  int32_t ___last;

  /// @brief Field names, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___names;

  /// @brief Field wildcards, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___wildcards;

  /// @brief Field particles, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___particles;

  /// @brief Field particleLast, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ___particleLast;

  /// @brief Field isUpaEnforced, offset: 0x38, size: 0x1, def value: None
  bool ___isUpaEnforced;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::SymbolsDictionary, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::SymbolsDictionary, ___last) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SymbolsDictionary, ___names) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SymbolsDictionary, ___wildcards) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SymbolsDictionary, ___particles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SymbolsDictionary, ___particleLast) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SymbolsDictionary, ___isUpaEnforced) == 0x38, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::SymbolsDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SymbolsDictionary*, "System.Xml.Schema", "SymbolsDictionary");

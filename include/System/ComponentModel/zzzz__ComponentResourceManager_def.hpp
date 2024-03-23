#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Resources/zzzz__ResourceManager_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ComponentResourceManager)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class SortedList_2;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Resources {
class ResourceSet;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class ComponentResourceManager;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ComponentResourceManager);
// Type: System.ComponentModel::ComponentResourceManager
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::ComponentResourceManager*
class CORDL_TYPE ComponentResourceManager : public ::System::Resources::ResourceManager {
public:
  // Declarations
  __declspec(property(get = get_NeutralResourcesCulture))::System::Globalization::CultureInfo* NeutralResourcesCulture;

  /// @brief Field _neutralResourcesCulture, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__neutralResourcesCulture, put = __cordl_internal_set__neutralResourcesCulture))::System::Globalization::CultureInfo* _neutralResourcesCulture;

  /// @brief Field _resourceSets, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__resourceSets, put = __cordl_internal_set__resourceSets))::System::Collections::Hashtable* _resourceSets;

  /// @brief Method ApplyResources, addr 0x1aec984, size 0x10, virtual false, abstract: false, final false
  inline void ApplyResources(::System::Object* value, ::StringW objectName);

  /// @brief Method ApplyResources, addr 0x1aec994, size 0xa90, virtual true, abstract: false, final false
  inline void ApplyResources(::System::Object* value, ::StringW objectName, ::System::Globalization::CultureInfo* culture);

  /// @brief Method FillResources, addr 0x1aed424, size 0x4f0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::SortedList_2<::StringW, ::System::Object*>* FillResources(::System::Globalization::CultureInfo* culture, ByRef<::System::Resources::ResourceSet*> resourceSet);

  static inline ::System::ComponentModel::ComponentResourceManager* New_ctor();

  static inline ::System::ComponentModel::ComponentResourceManager* New_ctor(::System::Type* t);

  constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get__neutralResourcesCulture();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& __cordl_internal_get__neutralResourcesCulture() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__resourceSets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get__resourceSets() const;

  constexpr void __cordl_internal_set__neutralResourcesCulture(::System::Globalization::CultureInfo* value);

  constexpr void __cordl_internal_set__resourceSets(::System::Collections::Hashtable* value);

  /// @brief Method .ctor, addr 0x1aec83c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1aec894, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* t);

  /// @brief Method get_NeutralResourcesCulture, addr 0x1aec8fc, size 0x88, virtual false, abstract: false, final false
  inline ::System::Globalization::CultureInfo* get_NeutralResourcesCulture();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComponentResourceManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComponentResourceManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComponentResourceManager(ComponentResourceManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComponentResourceManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComponentResourceManager(ComponentResourceManager const&) = delete;

  /// @brief Field _resourceSets, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____resourceSets;

  /// @brief Field _neutralResourcesCulture, offset: 0x90, size: 0x8, def value: None
  ::System::Globalization::CultureInfo* ____neutralResourcesCulture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ComponentResourceManager, 0x98>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::ComponentResourceManager, ____resourceSets) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ComponentResourceManager, ____neutralResourcesCulture) == 0x90, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ComponentResourceManager);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ComponentResourceManager*, "System.ComponentModel", "ComponentResourceManager");

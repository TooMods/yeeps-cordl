#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalDataStore)
namespace System {
class LocalDataStoreElement;
}
namespace System {
class LocalDataStoreMgr;
}
namespace System {
class LocalDataStoreSlot;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class LocalDataStore;
}
// Write type traits
MARK_REF_PTR_T(::System::LocalDataStore);
// Type: System::LocalDataStore
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::LocalDataStore*
class CORDL_TYPE LocalDataStore : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_DataTable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DataTable,
                      put = __cordl_internal_set_m_DataTable))::ArrayW<::System::LocalDataStoreElement*, ::Array<::System::LocalDataStoreElement*>*> m_DataTable;

  /// @brief Field m_Manager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Manager, put = __cordl_internal_set_m_Manager))::System::LocalDataStoreMgr* m_Manager;

  /// @brief Method Dispose, addr 0x2bf5244, size 0x1c, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method FreeData, addr 0x2bf5900, size 0x48, virtual false, abstract: false, final false
  inline void FreeData(int32_t slot, int64_t cookie);

  /// @brief Method GetData, addr 0x2bf541c, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Object* GetData(::System::LocalDataStoreSlot* slot);

  static inline ::System::LocalDataStore* New_ctor(::System::LocalDataStoreMgr* mgr, int32_t InitialCapacity);

  /// @brief Method PopulateElement, addr 0x2bf5654, size 0x2ac, virtual false, abstract: false, final false
  inline ::System::LocalDataStoreElement* PopulateElement(::System::LocalDataStoreSlot* slot);

  /// @brief Method SetData, addr 0x2bf5570, size 0xe4, virtual false, abstract: false, final false
  inline void SetData(::System::LocalDataStoreSlot* slot, ::System::Object* data);

  constexpr ::ArrayW<::System::LocalDataStoreElement*, ::Array<::System::LocalDataStoreElement*>*> const& __cordl_internal_get_m_DataTable() const;

  constexpr ::ArrayW<::System::LocalDataStoreElement*, ::Array<::System::LocalDataStoreElement*>*>& __cordl_internal_get_m_DataTable();

  constexpr ::System::LocalDataStoreMgr*& __cordl_internal_get_m_Manager();

  constexpr ::cordl_internals::to_const_pointer<::System::LocalDataStoreMgr*> const& __cordl_internal_get_m_Manager() const;

  constexpr void __cordl_internal_set_m_DataTable(::ArrayW<::System::LocalDataStoreElement*, ::Array<::System::LocalDataStoreElement*>*> value);

  constexpr void __cordl_internal_set_m_Manager(::System::LocalDataStoreMgr* value);

  /// @brief Method .ctor, addr 0x2bf52a8, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::LocalDataStoreMgr* mgr, int32_t InitialCapacity);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalDataStore();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalDataStore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalDataStore(LocalDataStore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalDataStore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalDataStore(LocalDataStore const&) = delete;

  /// @brief Field m_DataTable, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::LocalDataStoreElement*, ::Array<::System::LocalDataStoreElement*>*> ___m_DataTable;

  /// @brief Field m_Manager, offset: 0x18, size: 0x8, def value: None
  ::System::LocalDataStoreMgr* ___m_Manager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::LocalDataStore, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::LocalDataStore, ___m_DataTable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::LocalDataStore, ___m_Manager) == 0x18, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::LocalDataStore);
DEFINE_IL2CPP_ARG_TYPE(::System::LocalDataStore*, "System", "LocalDataStore");

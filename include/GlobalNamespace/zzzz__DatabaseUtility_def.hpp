#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DatabaseUtility)
namespace GlobalNamespace {
class DatabaseUtilityUI;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class DatabaseUtility;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DatabaseUtility);
// Type: ::DatabaseUtility
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DatabaseUtility*
class CORDL_TYPE DatabaseUtility : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field utilityUI, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_utilityUI, put = __cordl_internal_set_utilityUI))::UnityW<::GlobalNamespace::DatabaseUtilityUI> utilityUI;

  /// @brief Method GetInputLines, addr 0x276b840, size 0x158, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetInputLines(::StringW inputText);

  /// @brief Method HandleUtility, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<bool>* HandleUtility(::StringW password);

  static inline ::GlobalNamespace::DatabaseUtility* New_ctor();

  /// @brief Method Start, addr 0x276c6a0, size 0x68, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::DatabaseUtilityUI> const& __cordl_internal_get_utilityUI() const;

  constexpr ::UnityW<::GlobalNamespace::DatabaseUtilityUI>& __cordl_internal_get_utilityUI();

  constexpr void __cordl_internal_set_utilityUI(::UnityW<::GlobalNamespace::DatabaseUtilityUI> value);

  /// @brief Method .ctor, addr 0x276c118, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DatabaseUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DatabaseUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DatabaseUtility(DatabaseUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DatabaseUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DatabaseUtility(DatabaseUtility const&) = delete;

  /// @brief Field utilityUI, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DatabaseUtilityUI> ___utilityUI;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DatabaseUtility, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DatabaseUtility, ___utilityUI) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DatabaseUtility);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DatabaseUtility*, "", "DatabaseUtility");

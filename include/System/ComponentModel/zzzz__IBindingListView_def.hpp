#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IBindingListView)
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IList;
}
namespace System::ComponentModel {
class IBindingList;
}
namespace System::ComponentModel {
class ListSortDescriptionCollection;
}
// Forward declare root types
namespace System::ComponentModel {
class IBindingListView;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::IBindingListView);
// Type: System.ComponentModel::IBindingListView
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::IBindingListView*
class CORDL_TYPE IBindingListView {
public:
  // Declarations
  __declspec(property(get = get_Filter, put = set_Filter))::StringW Filter;

  __declspec(property(get = get_SortDescriptions))::System::ComponentModel::ListSortDescriptionCollection* SortDescriptions;

  __declspec(property(get = get_SupportsAdvancedSorting)) bool SupportsAdvancedSorting;

  __declspec(property(get = get_SupportsFiltering)) bool SupportsFiltering;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Convert operator to "::System::ComponentModel::IBindingList"
  constexpr operator ::System::ComponentModel::IBindingList*() noexcept;

  /// @brief Method ApplySort, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ApplySort(::System::ComponentModel::ListSortDescriptionCollection* sorts);

  /// @brief Method RemoveFilter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RemoveFilter();

  /// @brief Method get_Filter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Filter();

  /// @brief Method get_SortDescriptions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ComponentModel::ListSortDescriptionCollection* get_SortDescriptions();

  /// @brief Method get_SupportsAdvancedSorting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_SupportsAdvancedSorting();

  /// @brief Method get_SupportsFiltering, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_SupportsFiltering();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IList"
  constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

  /// @brief Convert to "::System::ComponentModel::IBindingList"
  constexpr ::System::ComponentModel::IBindingList* i___System__ComponentModel__IBindingList() noexcept;

  /// @brief Method set_Filter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Filter(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "IBindingListView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBindingListView(IBindingListView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBindingListView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBindingListView(IBindingListView const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::IBindingListView);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IBindingListView*, "System.ComponentModel", "IBindingListView");

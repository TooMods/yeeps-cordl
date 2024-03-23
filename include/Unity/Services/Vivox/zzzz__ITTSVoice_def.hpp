#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ITTSVoice)
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
namespace Unity::Services::Vivox {
template <typename TK> class IKeyedItemNotifyPropertyChanged_1;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class ITTSVoice;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::ITTSVoice);
// Type: Unity.Services.Vivox::ITTSVoice
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::ITTSVoice*
class CORDL_TYPE ITTSVoice {
public:
  // Declarations
  __declspec(property(get = get_Name))::StringW Name;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<uint32_t>"
  constexpr operator ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<uint32_t>*() noexcept;

  /// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Name();

  /// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<uint32_t>"
  constexpr ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<uint32_t>* i___Unity__Services__Vivox__IKeyedItemNotifyPropertyChanged_1_uint32_t_() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "ITTSVoice", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITTSVoice(ITTSVoice&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITTSVoice", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITTSVoice(ITTSVoice const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::ITTSVoice);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::ITTSVoice*, "Unity.Services.Vivox", "ITTSVoice");

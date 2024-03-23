#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ITextMessage)
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
namespace System {
struct DateTime;
}
namespace Unity::Services::Vivox {
template <typename TK> class IKeyedItemNotifyPropertyChanged_1;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class ITextMessage;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::ITextMessage);
// Type: Unity.Services.Vivox::ITextMessage
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::ITextMessage*
class CORDL_TYPE ITextMessage {
public:
  // Declarations
  __declspec(property(get = get_Language))::StringW Language;

  __declspec(property(get = get_Message))::StringW Message;

  __declspec(property(get = get_ReceivedTime))::System::DateTime ReceivedTime;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>"
  constexpr operator ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>*() noexcept;

  /// @brief Method get_Language, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Language();

  /// @brief Method get_Message, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Message();

  /// @brief Method get_ReceivedTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::DateTime get_ReceivedTime();

  /// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>"
  constexpr ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::StringW>* i___Unity__Services__Vivox__IKeyedItemNotifyPropertyChanged_1___StringW_() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "ITextMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITextMessage(ITextMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITextMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITextMessage(ITextMessage const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::ITextMessage);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::ITextMessage*, "Unity.Services.Vivox", "ITextMessage");

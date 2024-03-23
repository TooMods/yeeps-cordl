#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(ITTSMessageQueueEventArgs)
namespace Unity::Services::Vivox {
class TTSMessage;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class ITTSMessageQueueEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::ITTSMessageQueueEventArgs);
// Type: Unity.Services.Vivox::ITTSMessageQueueEventArgs
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::ITTSMessageQueueEventArgs*
class CORDL_TYPE ITTSMessageQueueEventArgs : public ::System::EventArgs {
public:
  // Declarations
  __declspec(property(get = get_Message))::Unity::Services::Vivox::TTSMessage* Message;

  /// @brief Field <Message>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Message_k__BackingField, put = __cordl_internal_set__Message_k__BackingField))::Unity::Services::Vivox::TTSMessage* _Message_k__BackingField;

  static inline ::Unity::Services::Vivox::ITTSMessageQueueEventArgs* New_ctor(::Unity::Services::Vivox::TTSMessage* message);

  constexpr ::Unity::Services::Vivox::TTSMessage*& __cordl_internal_get__Message_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::TTSMessage*> const& __cordl_internal_get__Message_k__BackingField() const;

  constexpr void __cordl_internal_set__Message_k__BackingField(::Unity::Services::Vivox::TTSMessage* value);

  /// @brief Method .ctor, addr 0x2fc7468, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::TTSMessage* message);

  /// @brief Method get_Message, addr 0x2fc74d4, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::TTSMessage* get_Message();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ITTSMessageQueueEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ITTSMessageQueueEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITTSMessageQueueEventArgs(ITTSMessageQueueEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITTSMessageQueueEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITTSMessageQueueEventArgs(ITTSMessageQueueEventArgs const&) = delete;

  /// @brief Field <Message>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::TTSMessage* ____Message_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::ITTSMessageQueueEventArgs, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ITTSMessageQueueEventArgs, ____Message_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::ITTSMessageQueueEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::ITTSMessageQueueEventArgs*, "Unity.Services.Vivox", "ITTSMessageQueueEventArgs");

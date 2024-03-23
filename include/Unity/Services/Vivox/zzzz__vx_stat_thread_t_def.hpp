#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_stat_thread_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_stat_thread_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_stat_thread_t);
// Type: Unity.Services.Vivox::vx_stat_thread_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_stat_thread_t*
class CORDL_TYPE vx_stat_thread_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_count_poll_gte_25ms, put = set_count_poll_gte_25ms)) int32_t count_poll_gte_25ms;

  __declspec(property(get = get_count_poll_lt_10ms, put = set_count_poll_lt_10ms)) int32_t count_poll_lt_10ms;

  __declspec(property(get = get_count_poll_lt_16ms, put = set_count_poll_lt_16ms)) int32_t count_poll_lt_16ms;

  __declspec(property(get = get_count_poll_lt_1ms, put = set_count_poll_lt_1ms)) int32_t count_poll_lt_1ms;

  __declspec(property(get = get_count_poll_lt_20ms, put = set_count_poll_lt_20ms)) int32_t count_poll_lt_20ms;

  __declspec(property(get = get_count_poll_lt_25ms, put = set_count_poll_lt_25ms)) int32_t count_poll_lt_25ms;

  __declspec(property(get = get_count_poll_lt_5ms, put = set_count_poll_lt_5ms)) int32_t count_poll_lt_5ms;

  __declspec(property(get = get_interval, put = set_interval)) int32_t interval;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x16ce5cc, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x16ce6d8, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x16ce638, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_stat_thread_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_stat_thread_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x16ceed8, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x16ce420, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x16ce474, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_stat_thread_t* obj);

  /// @brief Method get_count_poll_gte_25ms, addr 0x16cee78, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_count_poll_gte_25ms();

  /// @brief Method get_count_poll_lt_10ms, addr 0x16ceb38, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_count_poll_lt_10ms();

  /// @brief Method get_count_poll_lt_16ms, addr 0x16cec08, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_count_poll_lt_16ms();

  /// @brief Method get_count_poll_lt_1ms, addr 0x16ce998, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_count_poll_lt_1ms();

  /// @brief Method get_count_poll_lt_20ms, addr 0x16cecd8, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_count_poll_lt_20ms();

  /// @brief Method get_count_poll_lt_25ms, addr 0x16ceda8, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_count_poll_lt_25ms();

  /// @brief Method get_count_poll_lt_5ms, addr 0x16cea68, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_count_poll_lt_5ms();

  /// @brief Method get_interval, addr 0x16ce8c8, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_interval();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_count_poll_gte_25ms, addr 0x16cee08, size 0x70, virtual false, abstract: false, final false
  inline void set_count_poll_gte_25ms(int32_t value);

  /// @brief Method set_count_poll_lt_10ms, addr 0x16ceac8, size 0x70, virtual false, abstract: false, final false
  inline void set_count_poll_lt_10ms(int32_t value);

  /// @brief Method set_count_poll_lt_16ms, addr 0x16ceb98, size 0x70, virtual false, abstract: false, final false
  inline void set_count_poll_lt_16ms(int32_t value);

  /// @brief Method set_count_poll_lt_1ms, addr 0x16ce928, size 0x70, virtual false, abstract: false, final false
  inline void set_count_poll_lt_1ms(int32_t value);

  /// @brief Method set_count_poll_lt_20ms, addr 0x16cec68, size 0x70, virtual false, abstract: false, final false
  inline void set_count_poll_lt_20ms(int32_t value);

  /// @brief Method set_count_poll_lt_25ms, addr 0x16ced38, size 0x70, virtual false, abstract: false, final false
  inline void set_count_poll_lt_25ms(int32_t value);

  /// @brief Method set_count_poll_lt_5ms, addr 0x16ce9f8, size 0x70, virtual false, abstract: false, final false
  inline void set_count_poll_lt_5ms(int32_t value);

  /// @brief Method set_interval, addr 0x16ce858, size 0x70, virtual false, abstract: false, final false
  inline void set_interval(int32_t value);

  /// @brief Method swigRelease, addr 0x16ce4f0, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_stat_thread_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_stat_thread_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_stat_thread_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_stat_thread_t(vx_stat_thread_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_stat_thread_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_stat_thread_t(vx_stat_thread_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_stat_thread_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_stat_thread_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_stat_thread_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_stat_thread_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_stat_thread_t*, "Unity.Services.Vivox", "vx_stat_thread_t");

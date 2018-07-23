<?php
/**
 * @var $data    SP\Html\DataGrid\DataGridTab
 * @var $this    SP\Core\Template
 * @var $action  SP\Html\DataGrid\DataGridAction|SP\Html\DataGrid\DataGridActionSearch
 */
?>

<table class="mdl-data-table mdl-js-data-table mdl-data-table--selectable table-responsive data-table">
    <thead>
    <tr>
        <?php foreach ($data->getHeader()->getHeaders() as $header): ?>
            <th class="mdl-data-table__cell--non-numeric"><?php echo $header; ?></th>
        <?php endforeach; ?>

        <?php if ($data->getDataActionsCount() > 0): ?>
            <th class="mdl-data-table__cell--non-numeric">&nbsp;</th>
        <?php endif; ?>
    </tr>
    </thead>

    <tbody id="data-rows-<?php echo $data->getId(); ?>">
    <?php include $data->getDataRowTemplate(); ?>
    </tbody>
</table>

<!-- Pager -->
<?php include $data->getDataPagerTemplate(); ?>